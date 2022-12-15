#include "main.h"

/**
 *print_most_numbers - Print o to 9 except 2 and 4
 *
 *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{

	int k;

	for (k = 0; k <= 9; k++)
	{
		if (k != 2 && k != 4)
		{
			_putchar(k + '0');
		}
	}

	_putchar('\n');

}
