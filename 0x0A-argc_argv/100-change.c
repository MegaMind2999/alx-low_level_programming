#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print out the change
 * @argc: number of args
 * @argv: the args
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int tot, chg;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	chg = atoi(argv[1]);

	for (tot = 0; chg > 0; tot++)
	{
		if (chg - 25 >= 0)
			chg = chg - 25;
		else if (chg - 10 >= 0)
			chg = chg - 10;
		else if (chg - 5 >= 0)
			chg = chg - 5;
		else if (chg - 2 >= 0)
			chg = chg - 2;
		else if (chg - 1 >= 0)
			chg = chg - 1;
	}
	printf("%d\n", tot);
	return (0);
}
