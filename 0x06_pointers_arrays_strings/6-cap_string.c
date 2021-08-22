
#include "holberton.h"
/**
 * cap_string - cappitalize first latter of words
 * @str: string to be capitalize
 * Return: char pointer to string
 */


char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == str[0])
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;

		if (str[i] == ',' || str[i] == ',' || str[i] == '"')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;

		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;

		}

		if (str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}

		if (str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
