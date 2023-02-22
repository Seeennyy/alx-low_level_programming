#include "main.h"
/**
 * print_sign - determine if the number 
 * greater, less, or equal zero
 *
 *@n: An integer
 *
 * Return: 1 for positive. 0 for 0. -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{ 
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else 
	{
		_putchar (45);
		return (-1);
	}	
}
