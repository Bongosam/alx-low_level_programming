#include <stdio.h>

/**
 * swap_int - to swap the value of two numbers
 * @a: first number to be swapped
 * @b: second number to be swapped
 * Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
