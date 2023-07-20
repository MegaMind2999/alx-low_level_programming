#include "main.h"
/**
*print_diagonal - printing a diagonal
*@n:count of lines
*Return:returns void
*/
void print_diagonal(int n)
{
int padding, distance;
if (n > 0)
{
for (padding = 0; padding < n; padding++)
{
for (distance = 0; distance < padding; distance++)
_putchar(' ');

_putchar('\\');

if (padding == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
