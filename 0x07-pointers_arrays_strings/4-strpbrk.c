
#include "holberton.h"
/**
  * _strpbrk - find first bite of a string from accept in s
  * @s: string to be scanned
  * @accept: string holding sercheable chars
  * Return: first occurence of match bite
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}

	return (NULL);
}
