#include "main.h"

/**
 * set_bit - sets a bit to 1.
 * @n: integer tobe modified.
 * @index: the bit to be changed.
 * Return:  modified integer.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | (1 << index);
	return (*n);
}
