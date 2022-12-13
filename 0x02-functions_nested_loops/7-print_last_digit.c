#include "main.h"

/**
 *print_last_digit - Print the last digit.
 *@lastNum: int value to be checked
 *
 * Return:  int value
 */

int print_last_digit(int lastNum)
{
	lastNum = lastNum % 10;

	if (lastNum < 0)
		lastNum = -lastNum;

	_putchar(lastNum + '0');

	return (lastNum);

	return (0);

}


