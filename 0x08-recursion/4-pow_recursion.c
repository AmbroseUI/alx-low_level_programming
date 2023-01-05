#include "main.h"

/**
 * _pow_recursion - Return power function recursively
 * @x: input number
 * @y: input number
 *
 * Return: int value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
