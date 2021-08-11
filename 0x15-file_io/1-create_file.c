#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created.
 * @text_content: a Null terminated string to be written.
 * Return: integer.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content == NULL || filename == NULL || fd == -1)
		return (-1);

	write(fd, text_content, sizeof(text_content));

	close(fd);

	return (fd - 2);
}