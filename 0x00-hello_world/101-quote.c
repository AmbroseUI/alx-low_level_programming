#include <stdio.h>

/**
 *main -Entry point
 *
 *Return: Always 1 (Success)
 */

int main(void)
{

char val[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (int i = 0; val[i] != '\0'; i++)
{
putchar(val[i]);
}
putchar('\n');

return (1);
}
