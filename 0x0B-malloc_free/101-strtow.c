#include "holberton.h"

/**
 * strtow - splits a string into words.
 * @str: string to be splitted into two.
 * Return: pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	char *array = (char *)malloc(sizeof(str));

	if (!array || str == "" || str == NULL)
		return (NULL);

	
}