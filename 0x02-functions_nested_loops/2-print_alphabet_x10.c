#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (char a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar(10);
}
}
