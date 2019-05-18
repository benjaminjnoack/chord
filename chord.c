#include "chord.h"

struct chord quality;

void buildquality(char *chord, int sus, int add) {
	if ((strcmp(chord, "M") == 0) || (strcasecmp(chord, "Maj") == 0)) {
		quality.third = MAJOR_THIRD;
		quality.fifth = PERFECT_FIFTH;
	} else if ((strcmp(chord, "m") == 0) || (strcasecmp(chord, "min") == 0)) {
		quality.third = MAJOR_THIRD;
		quality.fifth = PERFECT_FIFTH;
	} else if (strcasecmp(chord, "dim") == 0) {
		quality.third = MINOR_THIRD;
		quality.fifth = DIMINISHED_FIFTH;
	} else if ((strcmp(chord, "+") == 0) || (strcasecmp(chord, "aug") == 0)) {
		quality.third = MAJOR_THIRD;
		quality.fifth = AUGMENTED_FIFTH;
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
	} else if ((strcasecmp(chord, "sus4") == 0)) {
		return SUSPENDED_FOURTH_QUALITY;
	} else if ((strcasecmp(chord, "sus2") == 0)) {
		return SUSPENDED_SECOND_QUALITY;
	} else if ((strcasecmp(chord, "add4") == 0)) {
		return ADDED_FOURTH_QUALITY;
	} else if ((strcasecmp(chord, "add6") == 0)) {
		return ADDED_SIXTH_QUALITY;
	} else if ((strcasecmp(chord, "add2") == 0) || (strcasecmp(chord, "add9") == 0)) {
		return ADDED_NINTH_QUALITY;
	} else {
		return NULL;
	}

	return &quality;
}

