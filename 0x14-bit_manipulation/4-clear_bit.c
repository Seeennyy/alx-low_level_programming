#include "main.h"

/**
 * clear_bit - setter
 * @n: pointerr
 * @index: indexx
 *
 * Return: 1 if good
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

