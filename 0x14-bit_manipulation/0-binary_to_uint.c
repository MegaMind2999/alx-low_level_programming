#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to int
 * @b: char string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, pw;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pw = 1, total = 0, len--; len >= 0; len--, pw *= 2)
	{
		if (b[len] == '1')
			total += pw;
	}

	return (total);
}
