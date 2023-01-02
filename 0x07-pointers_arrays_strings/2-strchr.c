#include "main.h"

/**
 * _strchr - Search for a character in a string
 * @s: Input string
 * @c: Searched character
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
