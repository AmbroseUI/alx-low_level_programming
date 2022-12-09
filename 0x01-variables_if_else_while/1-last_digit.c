#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n, nlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	nlast = n % 10;

	if (nlast > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nlast);
	}
	if (nlast == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nlast);
	}
	if (nlast < 6 && nlast != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nlast);
	}

	return (0);
}
