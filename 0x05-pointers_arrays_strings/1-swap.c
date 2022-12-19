#include "main.h"

/**
 *swap_int - Swap tow input values;
 *@a: address pointer for first input value
 *@b: address pointer for second input value
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
