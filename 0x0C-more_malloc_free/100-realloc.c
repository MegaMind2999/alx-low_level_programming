#include "main.h"
/**
* _realloc - reallocating a new memory block
* @ptr: pointer to the memory previously allocated
* @old_size: the size of ptr
* @new_size: the new size
* Return: pointer or null if failed
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i, min;

	if (ptr == 0)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	else
	{
		newptr = malloc(new_size);
		min = (old_size < new_size) ? old_size : new_size;
		if (newptr != NULL)
		{
			for (i = 0; i < min; i++)
				*((char *)newptr + i) = *((char *) ptr + i);
			free(ptr);
			return (newptr);
		}
		else
			return (0);
	}
}
