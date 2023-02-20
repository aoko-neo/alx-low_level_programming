#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * DEescription: print last digit
 *
 * Return: 0 Always (Success)
 */
int main(void)		/* Print last digit */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	return (0);
}
