#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size and assign char c
 * @size: size ot arr
 * @c: char to give
 * Return: pointer to array
 **/
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
