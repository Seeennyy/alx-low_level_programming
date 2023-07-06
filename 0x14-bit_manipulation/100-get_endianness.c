#include "main.h"

/**
 * get_endianness - cheicker
 * Return: 0 if it is big, 1 if it is little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

