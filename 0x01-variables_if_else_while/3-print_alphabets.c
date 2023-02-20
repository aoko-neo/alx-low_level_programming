#include <stdio.h>

/**
 * main - print lowercase and uppercase characters
 *
 * Return: 0 Always
 */
int main(void)
{
	char be;
	char de;

	for (be = 'a'; be <= 'z'; be++)
	{
		putchar(be);
	}
	for (de = 'A'; de <= 'Z'; de++)
	{
		putchar(de);
	}
	return (0);
}
