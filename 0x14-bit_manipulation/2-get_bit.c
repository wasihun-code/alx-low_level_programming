#include "main.h"

/**
 * get_bit - returns a bit at a given index.
 * @n: integer to be converted to binary.
 * @index: index for returning the bit.
 * Return: index of a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int  i = 0, j, binaryNum[1000];

	if (n == 0)
		return (0);
	while (n >= 1)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	j = sizeof(binaryNum) / sizeof(unsigned int);
	if (j < index)
		return (-1);
	return (binaryNum[index]);
}
