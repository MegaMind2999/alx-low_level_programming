#include <stdio.h>
#include "main.h"

/**
 * main - Prints all args passed to it
 * @argc: Number of args
 * @argv: the args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
