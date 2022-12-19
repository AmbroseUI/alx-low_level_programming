#include "main.h"
#include <string.h>
/**
 *_puts - print input string;
 *@str: string value
 *
 * Return: String value
 */

void _puts(char *str)
{
	int k, len;

	len = strlen(str);

	for (k = 0; k < len; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
