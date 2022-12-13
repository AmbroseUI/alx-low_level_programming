#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char val_putchar[9] = "_putchar\n";
	int k;

	for (k = 0; k <= 8; k++)
	{
		_putchar(val_putchar[k]);
	}
	return (0);
}
