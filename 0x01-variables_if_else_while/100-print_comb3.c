#include <stdio.h>

/**
 * main - starting point of execution
 * Prints all possible different combinations
 * of two digits with sime conditions
 * Return: 0 on success
 */
int main(void)
{
	int n, i;

	for (n = 0 ; n < 9 ; n++)
	{
		i = n + 1;
		do {
			putchar(n + '0');
			putchar(i + '0');
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);
}
