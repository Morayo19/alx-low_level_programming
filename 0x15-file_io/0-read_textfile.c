#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This code reads text file to be printed
 * @letters: Number of letters to read.
 * @filename: Text file that is read.
 * Return: w- Number of bytes that is read and printed.
 *        0 when the filename is NULL or func fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (v);
}
