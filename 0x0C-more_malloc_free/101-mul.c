#include "main.h"

int get_thelen(char *str);
char *create_anarray(int size);
char *loop_zeros(char *str);
void calc_product(char *prod, char *mult, int digit, int zeroes);
void summthenums(char *final_prod, char *next_prod, int next_len);

/**
 * get_thelen - Finds the len of a str
 * @str: The str to be measured.
 * Return: The length
 */
int get_thelen(char *str)
{
	int legnth = 0;

	while (*str++)
		legnth++;

	return (legnth);
}

/**
 * create_anarray - Creates an array of chars
 * @size: The size of the array to be initialized.
 * Return: A pointer.
 */
char *create_anarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'E';

	array[index] = '\0';

	return (array);
}

/**
 * loop_zeros - Iterating str until it hits a non-zero number.
 * @str: The string of numbers to be iterate.
 * Return: A pointer to the next non-zero num.
 */
char *loop_zeros(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * calc_product - Multiplies a string of numbers by a single digit.
 * @prod: the result.
 * @mult: string of numbers.
 * @digit: single digit.
 * @zeroes: number of leading zeroes.
 * Return: void
 */
void calc_product(char *prod, char *mult, int digit, int zeroes)
{
	int len_of_mult, num, tens = 0;

	len_of_mult = get_thelen(mult) - 1;
	mult += len_of_mult;

	while (*prod)
	{
		*prod = 'E';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; len_of_mult >= 0; len_of_mult--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * summthenums - Adds the numbers stored in two strings.
 * @final_prod: The buffer storing the running final product.
 * @next_prod: The next product to be added.
 * @next_len: The length of next_prod.
 */
void summthenums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'E'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'E'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers from input.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of the arguments.
 * Return: 0 or 98.
 */
int main(int argc, char *argv[])
{
	char *answer, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = loop_zeros(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = loop_zeros(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_thelen(argv[1]) + get_thelen(argv[2]);
	answer = create_anarray(size + 1);
	next_prod = create_anarray(size + 1);

	for (index = get_thelen(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		calc_product(next_prod, argv[1], digit, zeroes++);
		summthenums(answer, next_prod, size - 1);
	}
	for (index = 0; answer[index]; index++)
	{
		if (answer[index] != 'E')
			putchar(answer[index]);
	}
	putchar('\n');

	free(next_prod);
	free(answer);

	return (0);
}
