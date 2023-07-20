#include "main.h"
/**
*print_square - print squares using #
*@size: size of square
*Return:returns void
*/
void print_square(int size)
{
int width, hight;
if (size > 0)
{
for (width = 0; width < size; width++)
{
for (hight = 0; hight < (size - 1); hight++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
