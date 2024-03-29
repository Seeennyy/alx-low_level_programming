#include "main.h"

/**
 * flip_bits - counter
 * @n: 1st 
 * @m: 2nd
 *
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}

	return (count);
}

