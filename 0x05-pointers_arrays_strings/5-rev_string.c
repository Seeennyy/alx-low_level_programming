#include "main.h"

/**
 * rev_string - rverses a string
 * @s: Input string
 * Return: a reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
	c++;
	for (x = 0; x < c; x++)
	{
		c--;
		rev = s[i];
		s[x] = s[c];
		s[c] = rev;
	}
}

