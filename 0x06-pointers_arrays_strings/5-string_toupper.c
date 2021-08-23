
#include "holberton.h"
#include <stdio.h>

/**
 *  *string_toupper - check the code for Holberton School students.
 *@str: string in lowwer
 * Return: characters
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
