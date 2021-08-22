#include "holberton.h"

/**
  * main - adds passed argument
  * @argc: count padded arguments
  * @argv: argumnets
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int j, k, sum = 0;

	if (argc == 1)
		printf("0\n");
	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			for (k = 0; argv[j][k] != '\0'; k++)
			{
				if (!(argv[j][k] >= '0' && argv[j][k] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[j]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
