#include <stdio.h>

/**
 * main - print single digit numbers form 0 to 10
 *
 * Return: 0 Always (Success)
 */
int main(void)		/* print single digit characters */
{
	char be;

	for (be = '0'; be <= '9'; be++)
		putchar(be);

	putchar('\n');

	return (0);
}
