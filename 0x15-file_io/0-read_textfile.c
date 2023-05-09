#include "main.h"
#include <stdlib.h>

/**
 * read_textfi: print to stdout
 * @filename: from origin
 * @letters: characters
 * Return: w- exact number of bytes to be printed
 *        0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}

