#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number between rand_max/2
 *        positve and and negative and check if
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int r;

	srand(time(0));
	r = rand() - RAND_MAX / 2;

	if (r > 0)
		printf("%d is positive\n", r);
	else if (r < 0)
		printf("%d is negative\n", r);
	else
		printf("%d is zero\n", r);

	return (0);
}
