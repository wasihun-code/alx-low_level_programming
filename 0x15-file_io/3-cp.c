#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BSIZE 16384

int main(int ac, char **av)
{
	int fd1, fd2, count;
	char buf[BSIZE];

	if (ac != 3)
	{
		printf("Usage: cp %s %s \n", av[1], av[2]);
		exit (97);
	}

	fd1 = open(av[1], O_RDONLY);

	if (fd1 < 0)
		printf("Error: Can't read from %s \n", av[1]);

	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	
	if (fd2 < 0)
		printf("Error: Can't write to %s \n", av[2]);
	
	while ((count = read(fd1, buf, BSIZE)) > 0) 
		write(fd2, buf, count);

	close(fd1);
	close(fd2);
	if (fd1)
	{
		printf("Error: Can't close fd %d\n", fd1);
		exit (100);
	}
	if (fd2)
        {
                printf("Error: Can't close fd %d\n", fd2);
                exit (100);
        }
	return (0);

}