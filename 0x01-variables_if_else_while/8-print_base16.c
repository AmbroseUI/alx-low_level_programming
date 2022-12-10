#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int k;

	for (k = 0; k <= 58; k++)
	{
		if ((k >= 0 && k <= 9) || (k >= 49 && k <= 54))
		{
			putchar(k + '0');
		}
	}
	putchar('\n');

	return (0);
}
