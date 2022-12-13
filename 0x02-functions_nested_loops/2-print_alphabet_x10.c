#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets in lowercase 10 times.
 *
 *Return: No return value (success)
 */

void print_alphabet_x10(void)
{

	char lowAlpha;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
		{
			_putchar(lowAlpha);
		}
		_putchar('\n');
	}
}
