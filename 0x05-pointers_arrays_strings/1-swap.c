#include <stdio.h>
/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Returns: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
