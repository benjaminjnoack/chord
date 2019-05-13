#include "chord.h"

int *getquality(char *chord) {
	if ((strcmp(chord, "M") == 0) || (strcasecmp(chord, "Maj") == 0)) {
		return MAJOR_TRIAD_QUALITY;
	} else if ((strcmp(chord, "m") == 0) || (strcasecmp(chord, "min") == 0)) {
		return MINOR_TRIAD_QUALITY;
	} else if (strcasecmp(chord, "dim") == 0) {
		return DIMINISHED_TRIAD_QUALITY;
	} else if ((strcmp(chord, "+") == 0) || (strcasecmp(chord, "aug") == 0)) {
		return AUGMENTED_TRIAD_QUALITY;
	} else if ((strcmp(chord, "M7") == 0) || (strcasecmp(chord, "Maj7") == 0)) {
		return MAJOR_SEVENTH_QUALITY;
	} else if ((strcmp(chord, "m7") == 0) || (strcmp(chord, "min7") == 0)) {
		return MINOR_SEVENTH_QUALITY;
	} else if (strcmp(chord, "7") == 0) {
		return DOMINANT_SEVENTH_QUALITY;
	} else if (strcasecmp(chord, "dim7") == 0) {
		return DIMINISHED_SEVENTH_QUALITY;
	} else if ((strcasecmp(chord, "aug7") == 0) || (strcmp(chord, "+7") == 0)) {
		return AUGMENTED_MAJOR_SEVENTH_QUALITY;
	}

	return NULL;
}

