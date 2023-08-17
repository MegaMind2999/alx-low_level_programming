#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function..
 * @argc: arguments num.
 * @argv: arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, num_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != num_of_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
