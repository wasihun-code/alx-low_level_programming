#include "main.h"
#include "holberton.h"
/**
  * read_textfile - read and printout form a file
  * @filename: nameof the file
  * @letters: sizeof bytes to read and printout
  * Return: the number of bytes that read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn, red, wrt;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	opn = open(filename, O_RDONLY);
	red = read(opn, buff, letters);
	if (opn == -1 || red == -1)
	{
		free(buff);
		return (0);
	}
	close(opn);
	opn = open(filename, O_RDWR);
	if (opn == -1)
	{
		free(buff);
		return (0);
	}
	red = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, red);
	if (wrt == -1 || wrt != red)
	{
		free(buff);
		return (0);
	}
	close(opn);

	free(buff);
	return (wrt);
}