#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: striing
 * Return: integer
 */
int _atoi(char *s)
{
int x, y, z, l, m, d;

	x = 0;
	y = 0;
	z = 0;
	l = 0;
	m = 0;
	d = 0;

	while (s[l] != '\0')
		l++;

	while (x < l && m == 0)
		{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			d = s[x] - '0';
		if (y % 2)
				d = -d;
			z = z * 10 + d;
			m = 1;
		if (s[x + 1] < '0' || s[x + 1] > '9')
			break;
			m = 0;
		}
		x++;
		}

		if (m == 0)
	return (0);

	return (z);
}

