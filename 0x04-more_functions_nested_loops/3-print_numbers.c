#include "main.h"

/**
 *print_numbers - Print o to 9
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{

	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar(k + '0');
	}

	_putchar('\n');

}
