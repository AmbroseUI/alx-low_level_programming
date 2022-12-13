#include "main.h"

/**
 *_abs - compute absolute value of an integer.
 *@abs_int: int value to be checked
 *
 * Return: absolute int value
 */

int _abs(int abs_int)
{
	int intVal;

	intVal = abs_int;

	if (intVal < 0)
		return (-intVal);
	else
		return (intVal);


}


