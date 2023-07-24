#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
