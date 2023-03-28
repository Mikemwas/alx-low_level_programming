#include <stdio.h>

/***
 *  _strlen - Returns the length of a string.
 * @str: The string to get the length of a string
 * Return: The length of @str.
 */
void size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
