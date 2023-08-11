#include "main.h"

/**
 * malloc_checked - allocating  mem by malloc
 * @b: size of the memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
