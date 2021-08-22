#include "3-calc.h"

/**
  * op_add - add nums
  * @a: first number
  * @b: second number
  * Return: sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract nums
 * @a: first number
 * @b: second number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply nums
 * @a: first number
 * @b: second number
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divid nums
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - reminder of nums
 * @a: first number
 * @b: second number
 * Return: a + b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
