#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of double-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
        int d, p, c;
        for (d = '0'; d <= 9; d++)
{
for  (p = d + 1; p <= 9; p++)
{
for (c = p + 1; c <= 9; c++)
{
if ((p != d) != c)
{
        putchar(d);
        putchar(p);
        putchar(c);
if (d == '7' && p == '8')
continue; 
putchar (',');
putchar (' ');
}
}
}
}

  putchar('\n');

        return (0);
}

