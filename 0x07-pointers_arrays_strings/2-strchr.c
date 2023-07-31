#include "main.h"
/**
 * _strchr - locate a char in string
 * @s: string
 * @c: char
 * Return: 0 if not found and the location if found
 */
char *_strchr(char *s, char c)
{
	int loc = 0;

	for (; s[loc] >= '\0'; loc++)
	{
		if (s[loc] == c)
			return (&s[loc]);
	}
	return (0);
}
