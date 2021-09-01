#include "holberton.h"
#include "main.h"

/**
 *_memset-fill memory with a constant byte.
 *@s:pointer to the memory area.
 *@b:Constant byte to fill the memory area.
 *@n:Number of bytes to fill.
 *Return:Pointer to the memory area s.
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
