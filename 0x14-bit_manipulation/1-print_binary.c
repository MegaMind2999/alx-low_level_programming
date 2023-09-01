#include "main.h"
#include <stdio.h>

/**
 * print_binary - printing binary representation of a number
 * @n: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int padding;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, padding = 0; (tmp >>= 1) > 0; padding++)
		;

	for (; padding >= 0; padding--)
	{
		if ((n >> padding) & 1)
			printf("1");
		else
			printf("0");
	}
}
