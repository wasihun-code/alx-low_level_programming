#include "holberton.h"

/**
  * _strstr - find a substring in another string
  * @haystack: string to be scaned
  * @needle: substring to be found in haystack
  * Return: pointer to beginning of found string
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
