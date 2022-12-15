#include "main.h"

/**
 * print_square - Print characters to form a square
 * @size: parameter to determine the size of the suqare
 */

void print_square(int size)
{
	int k, i;

	if (size  > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (i = 1; i <= size; i++)
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
