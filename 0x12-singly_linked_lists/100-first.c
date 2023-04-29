#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a sentence to be printed before the main
 * function to accomplished
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

