#include "main.h"
/**
 * _strspn - Function to retrun the length of a prefix substring
 * @s: Input string
 * @accept: substring
 *
 * Return:Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (n);

		}
		s++;
	}
	return (n);
}
