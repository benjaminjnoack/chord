#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum {
	NOTESN = 12/* The number of notes */
};

/*
 * The scale should determine the enharmonic spellings of the notes (b/#/##)
 */
extern char *notes[];

/*
 */
int findRoot(char *chord);
