#include <stdio.h>

/**
 * main - print lowercase in reverse
 *
 * Return: 0 Always (Success)
 */
int main(void)		/* print lowercase letter in reverse */
{
	char be = 'z';

	for (be; be >= 'a'; be--)
		putchar(be);
	putchar('\n');
	return (0);
}
