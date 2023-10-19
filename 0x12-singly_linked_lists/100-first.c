#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Uses the constructor attribute to prints a strbefore the main.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

