#include "main.h"
#include <stdlib.h>

/**
 * mallock_checked - memory allocation using malloc
 * @b: How many beats
 *
 * Return: always (0) success.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}

