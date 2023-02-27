#include "main.h"
/**
 * puts_half - prints half of a string
* @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, xdlongxd;

	xdlongxd = 0;

	for (x = 0; str[x] != '\0'; x++)
		xdlongxd++;

	y = (xdlongxd / 2);

	if ((xdlongxd % 2) == 1)
		y = ((xdlongxd + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}

