#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - match integers in string
 * @s: string to be sorted
 * Return: integer value
 */

int _atoi(char *s)
{
	int length;
	int k;
	int result;
	char *const pt;
	
	length = strlen(s);
	
	if (length > 0)
	{
		for (k = 0; k <= length; k++)
		{
			if (s[k] >= '0' && s[k] <= '9')
			{
				result = atoi(s);
			}
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
