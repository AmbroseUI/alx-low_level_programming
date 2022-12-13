#include "main.h"

/**
 *print_alphabet - Print alphabets in lowercase.
 *
 *Return: No return value (success)
*/

void print_alphabet(void)
{

	char lowAlpha;

	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		_putchar(lowAlpha);
	}
	_putchar('\n');

}
