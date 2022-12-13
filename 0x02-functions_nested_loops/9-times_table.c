#include "main.h"

/**
 *times_table - Generate time table.
 *
 * Return: set of values
 */

void times_table(void)
{
	int i,j, k;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k + '0');
			if (k != 81)
			{
				_putchar(',');
				_putchar(' ');
	 		}
											        }
		_putchar('\n');
	}
}


