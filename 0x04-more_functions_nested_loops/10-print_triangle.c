#include "main.h"

/**
 * print_triangle - a triangle shape
 * @size: triangle's size
 * Return: Nothing
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (y = 1; y <= size; y++)
{
for (x = y; x < size; x++)
{
_putchar(' ');
}

for (x = 1; x <= y; x++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
