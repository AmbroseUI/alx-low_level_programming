#include "main.h"

/**
 *_isalpha - Check if for  alphabets.
 *@c: int value to be checked
 *
 * Return: return 1 if true else 0.
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

/*	return (0);*/
}


