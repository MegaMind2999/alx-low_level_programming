#include "main.h"
/**
*print_triangle - printing a triangle
*@size:size of triangle
*Return:returns void
*/
void print_triangle(int size)
{
int n1, n2;

if (size > 0)
{
for (n1 = 1; n1 <= size; n1++)
{
for (n2 = size - n1; n2 > 0; n2--)
_putchar(' ');

for (n2 = 0; n2 < n1; n2++)
_putchar('#');

if (n1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
