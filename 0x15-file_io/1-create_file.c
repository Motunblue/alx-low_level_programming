#include "main.h"

/**
 * _strlen - Count a string
 * @str: string to count NULL terminated
 * Return: count of string
 */
size_t _strlen(char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - Created a file
 * @filename: Name for the file
 * @text_content: content for the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = _strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
