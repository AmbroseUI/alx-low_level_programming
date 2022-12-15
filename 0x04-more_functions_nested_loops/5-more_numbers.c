#include "main.h"

/**
 *more_numbers - Print 0 to 9 10times
 *
 *Return: Always 0 (Success)
 */

void more_numbers(void)
{

	int k, i;

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k <= 9)
				_putchar(k + '0');
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}

		_putchar('\n');
	}

}
