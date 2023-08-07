#include "main.h"

/**
 * read_textfile - Reads a text file and print to stdout
 * @filename: File to read from
 * @letters: number to read and print
 * Return: Actual number of letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wbyte, r;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	wbyte = write(STDOUT_FILENO, buff, r);
	if (fd == -1 || r == -1 || wbyte == -1 || r != wbyte)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (wbyte);
}
