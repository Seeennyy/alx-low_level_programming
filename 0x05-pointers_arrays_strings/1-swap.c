#include "main.h"
/**
* swap_int - swaping two integers
* @a: first integer to swap
* @b: second integer to swap
*/

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
