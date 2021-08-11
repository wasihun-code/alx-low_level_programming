#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND, 0200);

	if (fd < 0)
		return (-1);

	write(fd, text_content, sizeof(text_content));
	close (fd);

	return (fd-2);
}