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
 * create_file - Creates a file
 * @filename: name of file to create
 * @text_content: Content of the file which is a string
 * Return: 1 on success and -1 on failure
 * Descriptiion: File permision should be rw-------.
 * If file already exits, do not change permision and truncate file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	size_t i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	i = _strlen(text_content);
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);

}
