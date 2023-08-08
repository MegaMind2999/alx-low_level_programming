#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - alocates two dim array
 * @width: width inp
 * @height: height inp
 * Return: pointer to the 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x, y;

	if (width <= 0 || height <= 0)
		return (0);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (0);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);

		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array[x]);

			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}

	return (array);
}
