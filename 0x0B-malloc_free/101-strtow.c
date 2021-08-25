#include "holberton.h"
#include "main.h"
#include <string.h>

#define BUFFERSIZE 1024
#define DELIM  "\t\r\n\a"

/**
 * strtow - splits a string into words.
 * @str: string to be splitted into two.
 * Return: pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	int bufsize = BUFFERSIZE, position = 0;
	char **tokens = (char **)malloc(sizeof(char *) * bufsize);
	char *token;

	if (!tokens)
		return (NULL);

	token = strtok(str, DELIM);

	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize) 
		{
			bufsize += BUFFERSIZE;
			tokens = realloc(tokens, bufsize * sizeof(char*));
			if (!tokens)
				 return (NULL);
		}
	token = strtok(NULL, DELIM);
	}
	tokens[position] = NULL;

	return (tokens);
}