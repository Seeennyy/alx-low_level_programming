#include "main.h"

/**
 * print_line - draws line
 * @n: number of times of char
 * Return: Nothing
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int x;

for (x = 1; x <= n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}

