#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random valid
 * passwords for the program 101-crackme
 * Return: zero
 */
int main(void)
{
	int randpass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		randpass[i] = rand() % 78;
		sum += (randpass[i] + '0');
		putchar(randpass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
