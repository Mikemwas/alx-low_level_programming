#include "main.h"

/**
 * get_endianness - is machine big or small
 * Return: 0 for bigger and 1 for small
 */
int get_endianness(void)
{
unsigned int k = 1;
char mike = (char *) &k;

return (mike);
}

