#include "main.h"

/**
 * print_alphabet_x10 - a function to print the alphabet 10 times
 * Return - always 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}
