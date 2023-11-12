#include "main.h"
#include <stdio.h>

/**
 * close_file - close a file
 * @fd: file descriptor of file to close
 * @file: file name
*/
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}


/**
 * main -  copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: Posix if error
*/
int main(int argc, char *argv[])
{
	int file_to_fd, file_from_fd;
	char buff[1024];
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from_fd = open(argv[1],  O_RDONLY);
	file_to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = read(file_from_fd, buff, 1024);
	if (file_from_fd == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (r > 0)
	{
		w = write(file_to_fd, buff, r);
		if (w == -1 || file_to_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
		r = read(file_from_fd, buff, 1024);
		file_to_fd = open(argv[2],  O_WRONLY | O_APPEND);
	}
	close_file(file_from_fd);
	close_file(file_to_fd);
	return (0); /*success*/
}
