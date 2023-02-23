#include "main.h"

/**
 * _isdigit - checking for digits
 * @c: number to be checked
 * Return: 1 if its a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
