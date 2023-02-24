#include <stdio.h>
#include <math.h>

/**
 * main - prints prime factors of 612852475143 (biggest factor)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int a, x, y;

a = 612852475143;
x = -1;

while (a % 2 == 0)
{
x = 2;
a /= 2;
}

for (y = 3; y <= sqrt(n); y += 2)
{
while (a % i == 0)
{
x = y;
a /= y;
}
}

if (a > 2)
x = a;

printf("%ld\n", x);

return (0);
}
