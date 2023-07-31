#include "main.h"
/**
 *_memset - fills block of memory with a specific byte
 *@s: start address
 *@b: the value
 *@n: num of bytes
 *Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
