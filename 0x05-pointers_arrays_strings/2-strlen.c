#include "main.h"
/**
* _strlen - tells the length of the string
* @s: string
* Return: string's length
*/

int _strlen(char *s)
{
	int xdlongxd = 0;

while (*s != '\0')
	{
		xdlongxd++;
		s++;
	}
return (xdlongxd);
}
