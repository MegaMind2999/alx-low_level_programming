#include "main.h"

/**
*string_nconcat - Concatenates two strings
*@s1: The first str
*@s2: The second str
*@n: The number of bytes of s2 to concat to s1.
*Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fullstr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	fullstr = malloc(sizeof(char) * (len + 1));

	if (fullstr == NULL)
		return (0);

	len = 0;

	for (index = 0; s1[index]; index++)
		fullstr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		fullstr[len++] = s2[index];

	fullstr[len] = '\0';

	return (fullstr);
}
