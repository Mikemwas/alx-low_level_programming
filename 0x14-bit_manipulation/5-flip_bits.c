#include "main.h"

/**
 * flip_bits - counts numbers
 * to get number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: how many bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, mike = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (k = 63; k >= 0; k--)
{
current = exclusive >> k;
if (current & 1)
mike++;
}

return (mike);
}

