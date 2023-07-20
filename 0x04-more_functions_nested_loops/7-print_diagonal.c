#include "main.h"
/**
*print_diagonal - printing a diagonal
*@n: count of lines
*Return:returns void
*/
void print_diagonal(int n)
{
int l, s;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (s = 0; s < l; s++)
_putchar(' ');

_putchar('\\');

if ((n - 1) == 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
