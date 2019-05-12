#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
/**
 * invervals between notes defined in half steps
 */
enum interval {
	NULL_TERMINATOR = 0,
	HALF_STEP = 1,
	WHOLE_STEP = 2,
	MINOR_THIRD = 3,
	MAJOR_THIRD = 4,
	DIMINISHED_FIFTH = 6,
	PERFECT_FIFTH = 7,
	AUGMENTED_FIFTH = 8
};

extern int AUGMENTED_TRIAD[];
extern int DIMINISHED_TRIAD[];
extern int MAJOR_TRIAD[];
extern int MINOR_TRIAD[];

int *getquality(char *chord);

