#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing my 2 dim array
 * @grid: 2 dim array to free
 * @height: height of arr
 * Return: void
 *
 **/
void free_grid(int **grid, int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
