#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 *@n: number to be considered
 */

void print_to_98(int n)
{
	int k;

	if (n > 98)
	{
		for (k = n; k >= 98; k--)
			if (k == 98)
				printf("%d", k);
			else
				printf("%d, ", k);
	}
	else
	{
		for (k = n; k <= 98; k++)
			if (k == 98)
				printf("%d", k);
			else
				printf("%d, ", k);
	}
	printf("\n");
}
