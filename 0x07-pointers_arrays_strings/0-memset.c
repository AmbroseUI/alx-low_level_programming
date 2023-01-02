#include "main.h"
#include <stdio.h>

/**
 * _memset - Fill a block of memory with a given value
 * @s: Starting address of the memory to be filled
 * @b: Any given value to fill
 * @n: Number of bytes to be chaned
 *
 * Return: changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
