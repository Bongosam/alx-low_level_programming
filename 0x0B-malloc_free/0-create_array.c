#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create an array of characters
 * @size: the size of the array
 * @c: the char to fill the array
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
