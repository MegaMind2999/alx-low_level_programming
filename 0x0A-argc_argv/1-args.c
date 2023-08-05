#include <stdio.h>
#include "main.h"

/**
 * main - Printing num of args passed into main
 * @argc: Number of command line arguments
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (counter = 0; *argv; counter++, argv++)
			;

		printf("%d\n", counter - 1);
	}

	return (0);
}
