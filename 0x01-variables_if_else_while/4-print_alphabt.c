#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char be;

	for (be = 'a'; be <= 'z'; be++)
	{
		if (be != 'q' && be != 'e')
			putchar(be);
	}
	putchar('\n');
	return (0);
}
