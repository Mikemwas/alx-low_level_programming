#include "main.h"

/**
 * clear_bit - sets the number to 0
 * @n: points digit to chsnge
 * @index: bit of the index cleared
 *
 * Return: 1 meaning success -1 not sucessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}

