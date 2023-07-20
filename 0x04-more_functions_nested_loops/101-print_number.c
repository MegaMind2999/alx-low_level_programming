#include "main.h"
/**
* print_number - Printing a number using putchar
* @n: The num to print
*
*/
void print_number(int n)
{
int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
