#include <stdio.h>

/**
*main- printing largest prime factor of a number
*
*Return: returns zero
*/

int main(void)
{
long n = 612852475143;
int inc = 0;
while (inc++ < n / 2)
{
if (n % inc == 0)
{
n /= 2;
continue;
}

for (inc = 3; inc < n / 2; inc += 2)
{
if (n % inc == 0)
n /= inc;

}
}
printf("%ld\n", n);
return (0);
}
