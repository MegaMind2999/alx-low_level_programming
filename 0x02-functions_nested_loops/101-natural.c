#include <stdio.h>
/**
*main - count the multiples
*of 3 or 5 below 1024
*Return: zero
*/
int main(void)
{
int i, n = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
n += i;
}
printf("%d", n);
return (0);
}
