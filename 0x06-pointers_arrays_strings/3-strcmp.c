#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: if str1 < str2, the negtive difference
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
