#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first num.
 * @b: second num.
 * Return: add of them .
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first num.
 * @b: second num.
 * Return: sub of them.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first num.
 * @b: second num.
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first num.
 * @b: second num.
 * Return: div of them
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
 * op_mod - calculates the module of two numbers.
 * @a: first num.
 * @b: second num.
 * Return: remainder of the division.
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
