#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: input array
 *
 * Return: Always 0 (suceess)
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			printf("%c", a[n][m]);
		}
		printf("\n");
	}
}
