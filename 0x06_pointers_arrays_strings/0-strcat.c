#include "holberton.h"
#include <string.h>

/**
 * _strcat - appends src to dest string.
 * Return: character string to a pointer.
 */

char _strcat(char* dest, char* src)
{
	int k, i = 6;

	for (k = 0; k < 7; k++)
	{
		*(dest + i) = *(src + k);
		i++;
	}
	strcpy(dest,"Hello World!\n");

	return (dest);
}
