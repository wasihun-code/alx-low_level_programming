#include "holberton.h"

/**
  * string_nconcat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to be added to s1
  * Return: the concatet string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, sz, l1, l2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n >= l2)
		n = l2;
	sz = l1 + n + 1;

	str = malloc(sizeof(char) * sz);
	if (str == NULL)
		return (NULL);

	for (j = 0; j < l1; j++)
		str[j] = s1[j];
	for (k = 0; k < n; k++)
	{
		str[j] = s2[k];
		j++;
	}

	str[j] = '\0';
	return (str);
}
