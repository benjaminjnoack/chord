#include "chord.h"

int AUGMENTED_TRIAD[] = {
	MAJOR_THIRD,
	AUGMENTED_FIFTH,
	NULL_TERMINATOR
};

int DIMINISHED_TRIAD[] = {
	MINOR_THIRD,
	DIMINISHED_FIFTH,
	NULL_TERMINATOR
};

int MAJOR_TRIAD[] = {
	MAJOR_THIRD,
	PERFECT_FIFTH,
	NULL_TERMINATOR
};

int MINOR_TRIAD[] = {
	MINOR_THIRD,
	PERFECT_FIFTH,
	NULL_TERMINATOR
};

int *getquality(char *chord) {
	if ((strcmp(chord, "M") == 0) || (strcasecmp(chord, "Maj") == 0)) {
		return MAJOR_TRIAD;
	} else if ((strcmp(chord, "m") == 0) || (strcasecmp(chord, "min") == 0)) {
		return MINOR_TRIAD;
	} else if (strcasecmp(chord, "dim") == 0) {
		return DIMINISHED_TRIAD;
	} else if ((strcmp(chord, "+") == 0) || (strcasecmp(chord, "aug") == 0)) {
		return AUGMENTED_TRIAD;
	}

	return NULL;
}

