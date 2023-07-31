#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A func to print the sum of 2 diagonals in square matrix
 * @a: the matrix
 * @size: dim
 * Return: nothing (VOID)
 */
void print_diagsums(int *a, int size)
{
	int dim1, dim2, y;

	dim1 = 0;
	dim2 = 0;

	for (y = 0; y < size; y++)
	{
		dim1 = dim1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		dim2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", dim1, dim2);
}
