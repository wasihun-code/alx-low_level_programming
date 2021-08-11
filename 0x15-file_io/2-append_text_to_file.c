#include "main.h"

/**
 * append_text_to_file - appends a text to the end of a file.
 * @filename: - name of the file.
 * @text_content: a Null terminated string to be appended.
 * Return: 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND, 0200);

	if (fd < 0 || text_content == NULL || filename == NULL)
	{
		printf("huhu");
		return (-1);
	}

	write(fd, text_content, sizeof(text_content));
	close(fd);

	if (close(fd) < 0)
		return (-1);
	return (fd);
}
