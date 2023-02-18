#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints from z to a
 * Return: Always 0 (Success)
 */

int main(void)

{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	putchar(x);
	putchar('\n');

	return (0);
}

