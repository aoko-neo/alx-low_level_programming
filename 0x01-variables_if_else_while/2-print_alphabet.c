#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: 0 Always
 */
int main(void)
{
	int a = 97;

	for (a; a <= 122; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
