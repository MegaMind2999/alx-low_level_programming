#include "main.h"
#include <stdio.h>

/**
 * rot13 - the encoder rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char origtext[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ciphertext[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == origtext[j])
			{
				s[i] = ciphertext[j];
				break;
			}
		}
	}
	return (s);
}
