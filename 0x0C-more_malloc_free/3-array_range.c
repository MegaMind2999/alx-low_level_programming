#include "main.h"

/**
* array_range - making an array of integers
* @min: smallest num in the array
* @max: max num in the array
* Return: pointer or null
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (0);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != 0)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
		return (0);

}
