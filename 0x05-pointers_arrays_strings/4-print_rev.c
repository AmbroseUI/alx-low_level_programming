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
	int k, len, len_1;
	char f;

	len = strlen(s);

	if (len > 0)
	{
		len_1 = len - 1;
		for (k = len_1; k >= 0; k--)
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
