#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - last digit
 * Return: Always 0
 */
int main(void)
{
	long int n;
	long int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("the last digit of %ld and is greater than 5\n", n);
	}
	else if (a == 0)
	{
		printf("last digit of %ld is and is 0\n", n);
	}
	else
	{
		printf("last digit of %ld and is less than 6 and not 0\n", n);
	}
	return (0);
}
