#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int k;
	int j;

	for (k = 0; k < 100; k++)
	{
		for (j = 0; j < 100; j++)
		{
			if (k < j)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (k != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
