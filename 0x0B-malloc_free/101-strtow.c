#include <stdlib.h>
#include "main.h"

/**
 * words_in_str - counts the words in a string
 * @s: string to count
 * Return: num of words
 */
int words_in_str(char *s)
{
	int indicator, c, num;

	indicator = 0;
	num = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			indicator = 0;
		else if (indicator == 0)
		{
			indicator = 1;
			num++;
		}
	}

	return (num);
}
/**
 * **strtow - spliting a string into words
 * @str: string to split
 * Return: pointer
 */
char **strtow(char *str)
{
	char **arr, *temp;
	int i, k = 0, len = 0, count, c = 0, start, end;

	while (*(str + len))
		len++;
	count = words_in_str(str);
	if (count == 0)
		return (0);

	arr = (char **) malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (0);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				arr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[k] = '\0';

	return (arr);
}
