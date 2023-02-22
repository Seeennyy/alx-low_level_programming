#include "main.h"
/**
 * _isalpha - Shows 1 when the arg is a char,
 * if it is not, it shows 0
 *
 *@c: A char in ASCII code
 *
 * Return: 1 for char. 0 for the rest
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');

}
