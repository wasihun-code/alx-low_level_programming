#include "holberton.h"

/**
 *_memset-fill memory with a constant byte.
 *@s:pointer to the memory area.
 *@b:Constant byte to fill the memory area.
 *@n:Number of bytes to fill.
 *Return:Pointer to the memory area s.
 */


void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
