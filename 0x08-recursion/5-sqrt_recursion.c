#include "main.h"

/**
 * _sqrt_recursion2 - internal func to calculate the square root
 * @n: number to calculate the sqaure root
 * @i: itrator
 * Return: the resulting of square root
 */
int _sqrt_recursion2(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (_sqrt_recursion2(num, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
	return (_sqrt_recursion2(n, 0));
}
