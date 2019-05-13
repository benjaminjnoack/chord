#include <stdlib.h>
#include <unistd.h>

#include "chord.h"
#include "note.h"

/*
 * Read the arguments
 * Determine the scale/capo position
 * TODO dynamically build the scale
 * Determine the root note
 * Determine the chord quality
 * Construct the chord spelling
 * TODO Print guitar fingering
 */
int main(int argc, char *argv[]) {
	char c;
	int capo;
	int g;
	int i;
	int n;
	int r;
	int *quality;
	int opt;

	capo = 0;
	g = 0;
	n = 0;
	i = 0;
	r = 0;

	while ((opt = getopt(argc, argv, "c:gl")) != -1) {
		switch (opt) {
		case 'c':
			capo = atoi(optarg);
			break;
		case 'g':
			printf("guitar\n");
			g = 1;
			break;
		case 'l':
			printf("listing\n");
			break;
		default:
			/* invalid option */
			exit(EXIT_FAILURE);
		}
	}

	if (optind == argc) {
		printf("expected argument\n");
		exit(EXIT_FAILURE);
	} else if ((optind + 1) == argc) {
		r = findRoot(argv[optind]);
		if (r == -1) {
			printf("invalid root: %s\n", argv[optind]);
			exit(EXIT_FAILURE);
		}
		printf("%s ", notes[r]);
	} else {
		printf("too many arguments\n");
		exit(EXIT_FAILURE);
	}

	if (strlen(notes[r]) == strlen(argv[optind])) {
		quality = MAJOR_TRIAD_QUALITY;
	} else {
		quality = getquality(argv[optind] + strlen(notes[r]));
		if (quality == NULL) {
			printf("could not determine chord quality\n");
			exit(EXIT_FAILURE);
		}
	}


	while (quality[i] != NULL_TERMINATOR) {
		n = r + quality[i];
		if (n >= NOTESN) {
			n -= NOTESN;
		}

		printf("%s ", notes[n]);
		i++;
	}

	printf("\n");
	return 0;
}

