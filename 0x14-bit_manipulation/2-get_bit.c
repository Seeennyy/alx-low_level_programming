#include "main.h"

/**
 * get_bit - returner
 * @n: what u need to get
 * @index: indexx
* Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

