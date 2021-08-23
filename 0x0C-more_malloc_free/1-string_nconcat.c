#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: string passed
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;
	return (l);
}

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of byties for s2
 * Return: pointer to a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *fulllength;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (lens2 > n)
	{
		lens2 = n;
	}

	fulllength = malloc((lens1 + lens2) * sizeof(char) + 1);
	for (i = 0; i < lens1; i++)
	{
		fulllength[i] = s1[i];
	}
	for (j = 0; j < lens2; i++, j++)
	{
		fulllength[i] = s2[j];
	}
	fulllength[i] = '\0';
	return (fulllength);
}
