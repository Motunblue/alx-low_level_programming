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
 * append_text_to_file - Appends to a file
 * @filename: name of file to append to
 * @text_content: Content of the file which is a string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
		return (1);
	i = _strlen(text_content);
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);

}
