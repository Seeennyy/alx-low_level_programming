#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char x;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (x = 'a'; x <= 'f'; x++)
	putchar(x);
	putchar('\n');

	return (0);
}

