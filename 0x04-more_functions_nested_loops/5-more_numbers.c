#include "main.h"

/**
 *more_numbers - Print 0 to 14i 10times
 *
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{

	int k, i, j;

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				j = k / 10;
			else
				j = k;

			_putchar(j + '0');

			if (k > 9)
			{
				_putchar(k % 10 + '0');
			}
		}

		_putchar('\n');
	}

}
