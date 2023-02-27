#include "main.h"
/**
* _puts - prints a strings
* @str: string to print
* Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str++);
}
	_putchar('\n');
}

