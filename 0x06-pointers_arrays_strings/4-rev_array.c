#include "main.h"
/**
 * reverse_array - reverse array of ints
 * @a: the array
 * @n: number of elements of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
