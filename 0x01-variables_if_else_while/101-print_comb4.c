#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int i, j, k, l, s, h, p;

	p = 1;
	s = 1;
	l = 2;
	h = 2;

	for (i = 0; i <= 7; i++)
	{
		if (j > 8)
		{
			s++;
			h++;
			p = s;
			l = h;
		}
		for (j = p; j <= 8; j++)
		{
			for (k = l; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			l++;
		}
		p++;
	}
	putchar('\n');

	return (0);
}
