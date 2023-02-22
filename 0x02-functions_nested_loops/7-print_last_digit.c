#include "main.h"
/**
 * print_last_digit - Prints the last digit
 *
 *@x: input number
 *
 * Return: the last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}
