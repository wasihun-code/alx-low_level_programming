#include "main.h"

/**
 * get_bit - returns a bit at a given index.
 * @n: integer to be converted to binary.
 * @index: index for returning the bit.
 * Return: index of a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0, binaryNum[1000];

	while (n >= 1)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	return (binaryNum[index]);
}
