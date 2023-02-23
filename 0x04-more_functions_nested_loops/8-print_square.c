#include "main.h"

/**
 * print_square - prints a square
 * @size: square's size
 * Retrun: Nothing
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;

for (y = 0; y < size; y++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

