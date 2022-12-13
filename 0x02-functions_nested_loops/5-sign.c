#include "main.h"

/**
 *print_sign - Check for the sign of a number.
 *@n: int value to be checked
 *
 * Return: return 1 if positive, -1 if negative, else 0.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}

	return (0);
}


