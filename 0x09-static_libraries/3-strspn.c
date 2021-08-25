#include "holberton.h"

/**
  * _strspn - count same chars form z given string
  * @s: original given string
  * @accept: string with chars to be coount in string s
  * Return: number of first same bites in s
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (len);
}
