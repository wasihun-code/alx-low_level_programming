#include "holberton.h"

/**
  * main - calculate product of 2 numbers
  * @argc: argument count
  * @argv: argumbet vextor
  * Return: 0
  */

int main(int argc, char *argv[])
{
	unsigned int rs;
	int j, k;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 3)
	{
		for (j = 1; j < argc; j++)
		{
			for (k = 0; argv[j][k] != '\0'; k++)
			{
				if (!(argv[j][k] >= '0' && argv[j][k] <= '9'))
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
	}

	rs = atoi(argv[1]) * atoi(argv[2]);
	printf("%u\n", rs);

	return (0);
}
