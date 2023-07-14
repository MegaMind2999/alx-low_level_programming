#include <stdio.h>

/**
 * main - printing numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
