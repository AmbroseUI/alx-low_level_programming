#include "main.h"

/**
 * print_line - Print Lines
 * @n: parameter to determine the length of the line
 */

void print_line(int n)
{
	int k;

	if (n  > 0)
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
