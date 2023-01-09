#include "main.h"
#include <stdlib.h>
/**
 * create_array - Memory function
 * @size: Array size
 * @c: input character
 *
 * Return: Return 1 always (success)
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		array[size] = c;
	}

	return (array);
}
