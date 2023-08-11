#include "main.h"

/**
* _calloc - allocate memory using malloc
*@nmemb: number of elements of arr
*@size: size of the memory block
*Return: poiner
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr != 0)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
		return (ptr);
	}
	else
		return (0);
}
