#include "main.h"

/**
 * print_diagonal - creates a diagonal line
 * @n: number of times the char
 * Return: Nothing
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (x = 0; x < n; x++)
{
for (y = 0; y < n; y++)
{
if (y == x)
_putchar('\\');
else if (y < x)
_putchar(' ');
}
_putchar('\n');
}
}
}

