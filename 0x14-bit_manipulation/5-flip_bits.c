#include "main.h"

/**
 * flip_bits - Function returns the number of bits we need to flip
 * to get from @n to @m.
 *
 * @n: Integer given.
 * @m: Integer given.
 *
 * Return: The number of bits we should flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0, d;

	d = n ^ m;

	while (d != 0)
	{
		/*Shift one bit a time and checking LSB */

		c += (d & 1);
		d >>= 1;
	}
	return (c);
}
