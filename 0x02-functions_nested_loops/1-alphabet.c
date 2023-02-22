#include "main.h"
/**
 * main - Entry point
 * Description: 'prints alphabet in a lowercase'
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++){
		_putchar(i);
	}
	_putchar ('\n');
}
