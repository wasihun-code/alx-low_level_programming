#include "main.h"
#include "holberton.h"
/**
  * main - copies a content from one file to another
  * @argc: number of argumentes
  * @argv: arguments of the main
  * Return: Success zero
  */
int main(int argc, char *argv[])
{
	int opn, opn2, red, wrt, cls, cls2, len;
	char *from = argv[1], *to = argv[2];
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	opn = open(from, O_RDONLY);
	red = read(opn, buff, 1024);
	if (opn == -1 || red == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", from);
		exit(98);
	}
	cls = close(opn);
	if (cls == -1)
	{
		dprintf(2, "Error: Can't close fd %d\b", opn);
		exit(100);
	}
	opn2 = open(to, O_CREAT | O_WRONLY | O_TRUNC | O_SYNC, 0664);
	/*		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);*/
	for (len = 0; buff[len] != '\0'; len++)
		;
	wrt = write(opn2, buff, len);
	if (opn2 == -1 || wrt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	cls2 = close(opn2);
	if (cls2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\b", opn2);
		exit(100);
	}
	return (0);
}
