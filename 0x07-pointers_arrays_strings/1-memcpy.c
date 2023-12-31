#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: memory dest
 *@src: memory src
 *@n: num of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
