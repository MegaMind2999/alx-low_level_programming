#include "main.h"

/**
 * len_of_str - gets length of a string
 * @s: string
 * Return: the length
 */
int len_of_str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_of_str(s + 1));
}

/**
 * is_pal - checkingfor pal
 * @s: string to checking
 * @i: iterator
 * @len: full len
 * Return: 1 or 0
 */
int is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i > len)
		return (1);
	return (is_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - checking if a string is a palindrome
 * @s: string to check
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_pal(s, 0, len_of_str(s)));
}
