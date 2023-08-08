#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicating to a new memory location
 * @str: the string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, r = 0;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;

	str2 = malloc(i + 1);

	if (str2 == NULL)
		return (0);

	for (r = 0; str[r] != '\0' ; r++)
		str2[r] = str[r];

	return (str2);
}
