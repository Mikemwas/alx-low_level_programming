#include "main.h"

/**
 * set_bit - seting s bit to1
 * @n:pointing number to change
 * @index: bit index set to 1
 *
 * Return: 1 sucess -1 for not success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}

