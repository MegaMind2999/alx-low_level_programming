#include "main.h"
/**
*print_last_digit - printing last digit of a number
*@n: number to input
*Return:  0 always
*/
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (0);
}
