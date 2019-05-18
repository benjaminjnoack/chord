#include "note.h"

/* The enharmonic spelling is incidentally chosen to match my reference book */
char *notes[] = {
	"A",
	"Bb",
	"B",
	"C",
	"C#",
	"D",
	"Eb",
	"E",
	"F",
	"F#",
	"G",
	"Ab"
};

int findRoot(char *chord) {
	int i;
	int n;

	if (isupper(chord[0])) {
		if (chord[0] > 'G') {
			return -1;
		}
	} else if (islower(chord[0])) {
		if (chord[0] > 'g') {
			return -1;
		} else {
			chord[0] = toupper(chord[0]);
		}
	} else {
		return -1;
	}
	printf("%s\n", chord);
	switch (chord[1]) {
		case '#':
		case 'b':
		case '\0':
			n = 2;
			break;
		default:
			n = 1;
	}
	//For B, it finds Bb first
	for (i = 0; i < NOTESN; i++) {
		if (strncmp(chord, notes[i], n) == 0) {
			return i;
		}
	}

	//last ditch, look for other enharmonic spellings
	if (strncasecmp(chord, "A#", n) == 0) {
		return 1;
	} else if (strncasecmp(chord, "Db", n) == 0) {
		return 4;
	} else if (strncasecmp(chord, "D#", n) == 0) {
		return 6;
	} else if (strncasecmp(chord, "Gb", n) == 0) {
		return 9;
	} else if (strncasecmp(chord, "G#", n) == 0) {
		return 11;
	}

	return -1;
}

