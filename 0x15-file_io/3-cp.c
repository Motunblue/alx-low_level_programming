#include <fcntl.h>

/**
 * main - copies content of a file to another
 * @ac: argument count
 * @av : argument vector
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, w, c1, c2, lgnt = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w = write(fd2, buffer, lgnt);

	if (fd2 == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (c1 == -1) ? fd1 : fd2);
		exit(100);
	}
	return (0);
}
