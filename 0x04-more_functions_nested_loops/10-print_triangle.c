#include "main.h"

/**
 * print_triangle- Print characters to form a Triangle
 * @size: parameter to determine the size of the triangle
 */

void print_triangle(int size)
{
	int k, i, j;

	if (size  > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (i = k; i < size; i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= k; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
