#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: nothing to return
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar('-');
	}
	m /= 10;
	if (m != 0)
	print_number(m);
	_putchar((unsigned int) n % 10 + '0');
}
