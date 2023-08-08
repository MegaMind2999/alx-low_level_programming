#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings togther
 * @s1: str1
 * @s2: str2
 * Return: pointer to concatinated str
*/
char *str_concat(char *s1, char *s2)
{
	char *finalstr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	finalstr = malloc(i + j + 1);

	if (finalstr == NULL)
		return (0);
	i = j = 0;
	while (s1[i] != '\0')
	{
		finalstr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		finalstr[i] = s2[j];
		i++, j++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}
