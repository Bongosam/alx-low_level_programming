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
		printf("Last digit of %ld is %ld and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %ld is %ld and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %ld is %ld and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
