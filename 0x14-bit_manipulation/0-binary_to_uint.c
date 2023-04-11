#include "main.h"
/**
 * power_2 - Function to calculate the power of 2.
 *
 * @exp: Exponant.
 *
 * Return: The result.
 */
unsigned int power_2(unsigned int exp)
{
	unsigned int i, power = 1;

	for (i = 0; i < exp ; i++)
	{
		power = power * 2;
	}
	return (power);
}
/**
 * binary_to_uint - Function that converts a binary to an unsigned int.
 *
 * @b: A binary number.
 *
 * Return: A converted verion of @b, or 0 if it fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converter = 0, exp;
	int i, length = 0;

	if (b == NULL)
		return (0);

	/*Get the length of th string b*/
	while (b[length] != '\0')
		length++;

	/*Convert and check if b contains any char differ to 0 or 1*/
	for (i = length - 1, exp = 0; i >= 0; i--, exp++)
	{
		if ((b[i] == '0') || (b[i] == '1'))
			converter += (b[i] - '0') * power_2(exp);
		else
			return (0);
	}
	return (converter);
}
