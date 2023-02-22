#include "main.h"
/**
 * jack_bauer - prints the minutes of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int x, y, z, l;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(z + 48);
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}


}
