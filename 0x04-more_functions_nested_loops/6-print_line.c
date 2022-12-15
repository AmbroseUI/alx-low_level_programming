#include "main.h"

/**
 * print_line - Print Lines
 * @n: parameter to determine the length of the line
 * Return: return character
 */
void print_line(int n)
{
	int k;

	if (n  > 0)
	{
		for (k = 0; k <= n; k++)
			_putchar('_');
		_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
