#include "holberton.h"

/**
 *_memset-fill memory with a constant byte.
 *@s:pointer to the memory area.
 *@b:Constant byte to fill the memory area.
 *@n:Number of bytes to fill.
 *Return:Pointer to the memory area s.
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ln;

	char *memory = s, value = b;

	for (ln = 0; ln < n; ln++)
		memory[ln] = value;

	return (memory);
}
