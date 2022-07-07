#include "main.h"

/**
 * print_line - draws a straight line n times in the terminal
 * @n: Number of lines wanted
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');

		_putchar('\n');
	}
}
