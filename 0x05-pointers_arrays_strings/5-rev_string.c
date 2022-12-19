#include "main.h"
#include <string.h>
/**
 *rev_string- print input string in reverse order
 *@s: string value
 *
 * Return: String value
 */

void rev_string(char *s)
{
	int k, len, len_1;
	char f;

	len = strlen(s);

	if (len > 0)
	{
		len_1 = len;
		for (k = len_1; k >= 0; k--)
		{
			 s[len - k] = s[k-1];
		}
		/*printf("%s", s);*/
		f = '\n';

	}
	else
	{
		f = '\n';
	}
	printf("%c", f);/*/_putchar(f);*/
}
