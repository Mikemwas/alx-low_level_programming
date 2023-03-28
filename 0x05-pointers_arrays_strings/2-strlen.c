#include "main.h"

/***
 *  _strlen - Returns the length of a string.
 * @str: The string to get the length of a string
 * Return: The length of @str.
 */
int  _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
