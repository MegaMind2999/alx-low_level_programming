#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatinates all of my args
 * @ac: num of args
 * @av: the args
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, len = 0;
	char *finalstr;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	finalstr = malloc(len + 1);
	if (finalstr == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		finalstr[r] = av[i][n];
		r++;
	}
	if (finalstr[r] == '\0')
	{
		finalstr[r++] = '\n';
	}
	}
	return (finalstr);
}
