#include <stdio.h>

/**
 * main - starting point for execution
 * prints all the numbers between 00 and 99
 * no two digits being the same
 * Return: 0 if code is successful
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
		for (j = 0; j <= 99; j++)
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
