#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q, e.
 *
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
			continue;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
