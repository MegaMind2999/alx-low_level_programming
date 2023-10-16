#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: the substring
 * @needle: the string
 * Return: location or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *p = needle;

		while (*s == *p && *p != '\0')
		{
			s++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
