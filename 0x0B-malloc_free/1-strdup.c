#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Memory pointer function
 * @str: input string
 *
 * Return: Return 1 always (success)
 */

char *_strdup(char *str)
{
	char *duplicateString;
	int k, lent;

	k = 0;
	lent = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[lent])
		lent++;

	duplicateString = malloc(sizeof(char) * (lent + 1));

	if (duplicateString == NULL)
	{
		return (NULL);
	}

	while ((duplicateString[k] = str[k]) != '\0')
	{
		k++;
	}

	return (duplicateString);
}
