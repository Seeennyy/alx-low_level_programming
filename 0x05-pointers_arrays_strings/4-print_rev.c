#include "main.h"
/**
* print_rev - a function that prints a string
*, in reverse, followed by a new line.
* @s: string
* Return: nothing
*/
void print_rev(char *s)
{
	int xdlongxd = 0;
	int xdd;

while (*s != '\0')
{
	xdlongxd++;
	s++;
}
	s--;
for (xdd = xdlongxd; xdd > 0; xdd--)
{
	_putchar(*s);
	s--;
}

	_putchar('\n');
}

