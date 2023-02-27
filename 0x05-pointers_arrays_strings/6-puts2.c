#include "main.h"
/**
 * puts2 - print only one character out of two
 * @str: input
 * Return: a printed char
 */
void puts2(char *str)
{
	int xdlongxd = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		xdlongxd++;
	}
	x = xdlongxd - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

