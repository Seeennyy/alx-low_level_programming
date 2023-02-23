#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 1; x < 101; x++)
{
if (x % 3 == 0 && x % 5 != 0)
{
printf(" Fizz");
}
else if (x % 3 != 0 && x % 5 == 0)
{
printf(" Buzz");
}
else if (x % 3 == 0 && x % 5 == 0)
{
printf(" FizzBuzz");
}
else if (x == 1)
{
printf("%d", x);
}
else
{
printf(" %d", x);
}
}
printf("\n");

return (0);
}

