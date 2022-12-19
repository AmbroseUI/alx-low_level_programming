#include "main.h"
#include <string.h>
/**
 *print_rev - print input string in reverse order
 *@s: string value
 *
 * Return: String value
 */

void print_rev(char *s)
{
	int k, len;
	char f;

	len = strlen(s);

	if (len > 0)
	{
		for (k = len; k >= 0; k--)
		{
			_putchar(s[k]);
			f = '\n';
		}
	}
	else
	{
		f = '\n';
	}
	_putchar(f);
}
