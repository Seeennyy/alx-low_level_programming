#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints from a to z and A to Z
 * Return: Always 0 (Success)
 */

int main(void)
{
        char x;
        for (x = 'a'; x <= 'z'; x++)
        putchar(x);
        
	for (x = 'A'; x <= 'Z'; x++)
        putchar(x);
	putchar('\n');

        return (0);
}
