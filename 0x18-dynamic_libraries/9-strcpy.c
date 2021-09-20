#include "holberton.h"

/**
  * _strcpy - copy string
  * @dest: destination of the copy file
  * @src: source of the string
  * Return: ponter to the copied string
  */

char *_strcpy(char *dest, char *src)
{
	int index;
	int len;

	for (len = 0; src[len] != '\0'; len++)
		;
	for (index = 0; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
