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
	int len = strlen(s);
	int k;
	int index;
	char rev_str[];

	strcpy(rev_str, s);

	index = 0;

	if (len > 0)
	{
		for (k = len - 1; k >= 0; k--)
		{
			s[index] = rev_str[k];
			index++;
		}
	}
	else
	{
		s[0] = '\0';
	}
}
