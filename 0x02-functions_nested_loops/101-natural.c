#include <stdio.h>
/**
*main - count the multiples
*of 3 or 5 below 1024
*Return: zero
*/
int main(void)
{
int n = 0;
int i = 0;
for (i = 3; i < 1024; i += 3)
n += i;

for (i = 5; i < 1024; i += 5)
n += i;

printf("%d", n);
return (0);
}
