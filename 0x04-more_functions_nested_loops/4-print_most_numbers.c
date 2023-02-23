#include "main.h"
#include <stdio.h>

/**
* print_numbers - Print numbers except 2,4
*
* Return: nothing
*/

void print_most_numbers(void)
{
 int c;

 for (c = 48; c < 58; c++)
 {
 if (c != 50)
 {
 if (c != 52)
 {
 _putchar(c);
 }
 }
 }
 _putchar('\n');
}
