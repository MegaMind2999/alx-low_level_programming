#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that adds two possitive numbers
 * @argc: Number of args
 * @argv: args
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, j, len, thsum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		thsum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			thsum += atoi(argv[i]);
		}

	printf("%d\n", thsum);
	}
	return (0);
}
