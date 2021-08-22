#include "holberton.h"

/**
  * main - minimum number of coins to make change
  * @argc: count argumnets
  * @argv: passed arguments
  * Return: 0
 */

int main(int argc, char *argv[])
{
	int cc1 = 0, cc2 = 0, cc3 = 0, cc4 = 0, cc5 = 0, re, cent;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent >= 25)
	{
		cc1 = cent / 25;
		cent %= 25;
	}
	while (cent >= 10)
	{
		cc2 = cent / 10;
		cent %= 10;
	}
	while (cent >= 5)
	{
		cc3 = cent / 5;
		cent %= 5;
	}
	while (cent >= 2)
	{
		cc4 = cent / 2;
		cent %= 2;
	}
	while (cent >= 1)
	{
		cc5 = cent / 1;
		cent %= 1;
	}
	
	re = cc1 + cc2 + cc3 + cc4 + cc5;
	printf("%d\n", re);
	return (0);
}
