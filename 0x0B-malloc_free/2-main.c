#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s;

	s = str_concat("Betty", "Holberton");

	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	return (0);
}
