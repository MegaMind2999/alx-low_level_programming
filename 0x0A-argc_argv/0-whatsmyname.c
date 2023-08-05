#include <stdio.h>

/**
 * main - print the program name
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
