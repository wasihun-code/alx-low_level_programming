
#include "holberton.h"

/**
 * leet - encode latters 1337
 * @str: string to be encode
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j, num = 5;
	char str1[] = "aeotl";
	char str2[] = "AEOTL";
	char encode[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (str[i] == str2[j] || str[i] == str1[j])
				str[i] = encode[j];
		}
	}
	return (str);
}
