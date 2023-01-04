#include "main.h"

/**
 * _strlen_recursion - Recursive function to find the length of a string
 * @s: input string
 *
 * Return: no return value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
