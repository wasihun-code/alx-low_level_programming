#include "holberton.h"
/**
  * main - calculate product of 2 numbers
  * @argc: argument count
  * @argv: argumbet vextor
  * Return: 0
  */
int main(int argc, char *argv[])
{
	unsigned int res;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%u\n", res);

	return (0);
}
