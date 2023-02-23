#include "main.h"

/**
 * largest_number - returns the largest
 * @a: 1st number
 * @b: 2nd number
 * @c: 3rd number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}
