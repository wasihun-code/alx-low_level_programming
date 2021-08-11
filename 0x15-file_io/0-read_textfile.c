#include "main.h"
#include <string.h>
#define BFSIZE 16384

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[BFSIZE];

	fd = open(filename, O_WRONLY | O_CREAT, 0644);

	if (filename == NULL || fd < 0)
		return 0;

	read(fd, buf, letters);
	write(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);
		
	if (close(fd) < 0)
		return(0);

	return (letters);
}