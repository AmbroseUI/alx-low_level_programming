#include "main.h"

/**
 * _memcpy - C function to copy memory
 * @dest: distination memory
 * @src: Source memory to cory from
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
