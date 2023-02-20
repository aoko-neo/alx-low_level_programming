#include <stdio.h>

/**
 * main - print single digit numbers 0 to 10 without char
 *
 * Return: 0 Always (Success)
 */
int main(void)		/* print single digit numbers 0 to 10 without char */
{
	int be;

	for (be = 48; be <= 57; be++)
		putchar(be);

	putchar('\n');
	return (0);
}
