#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints from a to z and A to Z
 * Return: Always 0 (Success)
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	putchar(y);

	for (y = 'A'; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');

	return (0);
}
