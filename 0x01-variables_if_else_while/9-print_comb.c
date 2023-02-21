#include <stdio.h>

/**
 * main - print single digit numbers with comma and space
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	if (a != 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
