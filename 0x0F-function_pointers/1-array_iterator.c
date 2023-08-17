#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: input integer arr.
 * @size: size of the arr.
 * @action: pointer to the function.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
