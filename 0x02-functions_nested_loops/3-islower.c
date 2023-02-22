#include "main.h"
/**
 * _islower - Shows 1 when the arg is a lowercase char,
 * if it is not, it shows 0
 *
 * Return: 1 for lowercase char. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
