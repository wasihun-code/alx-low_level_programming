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
	unsigned int i;
	char *p = (char *)s;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (p);
}
