#include <stdio.h>

/**
 * main - starting point of code running
 * prints all single number of base 16
 * using putchar to print
 * Return: 0 is successful
 */
int main(void)
{
	int i;
	char h;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
