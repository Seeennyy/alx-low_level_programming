#include "main.h"

int check_pal(char *s, int i, int x);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string a palindrome
 * @s: reversed string
 *
 * Return: 1 if yes , 0 not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - gives the string's length
 * @s: string to calculate the length of
 * Return: the string's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @y: string to check
 * @i: iterator
 * @x: length of the string
 *
 * Return: 1 = palindrome, 0 = not
 */
int check_pal(char *s, int i, int x)
{
	if (*(s + i) != *(s + x - 1))
		return (0);
	if (i >= x)
		return (1);
	return (check_pal(s, i + 1, x - 1));
}

