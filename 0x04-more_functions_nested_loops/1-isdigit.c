#include "main.h"

/**
 * _isdigit - check for digits
 * @c: parameter to be checked
 * Return: return 1 if uppercase and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
