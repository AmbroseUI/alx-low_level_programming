#include "main.h"

/**
 * print_diagonal - Print Lines diagonally
 * @n: parameter to determine the length of the line
 */

void print_diagonal(int n)
{
	int k, i;

	if (n  > 0)
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('\\');
			_putchar('\n');

			if (k < n)
			{
				for (i = k; i >= 1; i--)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
