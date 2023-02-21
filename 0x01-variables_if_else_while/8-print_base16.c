#include <stdio.h>

/**
 * main - print base 16 in lowercase
 *
 * Return: 0 Always (Success)
 */
int main(void)		/* print base 16 lowercase numbers */
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
