#include <stdio.h>

/**
 * main - starting point of code running
 * prints all single digit number of base 10
 * using putchar to print
 * put comma on every number
 * Return: 0 is successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
