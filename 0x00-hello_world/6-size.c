#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sizeof different data structures in c.
 * Return: 0 since void main function.
 */

int main(void)
{
	char c;
	char str[] = "byte(s)";
	int l;
	long e;
	long long int s;
	float f;

	printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), str);
	printf("Size of an int: %lu %s\n", (unsigned long)sizeof(l), str);
	printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(e), str);
	printf("Size of a long long int: %lu %s\n", (signed long)sizeof(s), str);
	printf("Size of a float: %lu %s\n", (unsigned long)sizeof(f), str);

	return (0);
}
