#include "main.h"

/**
 * read_textfile - rewads a text file ad print to stdout
 * @filename: file to read read from
 * @letters: Number of letters to print
 * Return: the actual umber of letters it read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, fd;
	char str[letters];

	fd = open(filename, OWRONLY);
	if (fd == -1)
		return (0);
	r = read(fd, str, letters);
	if (r == -1)
		return (0);
	return (r);
}
