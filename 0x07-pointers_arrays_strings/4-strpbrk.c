#include <stdio.h>
#include "main.h"
/*
 * _strbrk - entry poitn
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char* p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
