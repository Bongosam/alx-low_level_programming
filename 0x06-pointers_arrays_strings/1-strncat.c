#include "main.h"

/**
 * _strncat - concatenates two strings using at most an imputted number.
 * @dest: te string to be appended upon.
 * @src: the string to be appende to dest
 * @n: the number of bytes from the src to be appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
