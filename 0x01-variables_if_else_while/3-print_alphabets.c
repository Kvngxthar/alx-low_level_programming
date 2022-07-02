#include <stdio.h>

/**
 * main - starting point of code running
 * prints alphabet in lowercase
 * followes by uppercase then newline
 * Return: 0 is successful
 */
int main(void)
{
	char a2z;

	for (a2z = 'a'; a2z <= 'z'; a2z++)
	{
		putchar(a2z);
	}
	for (a2z = 'A'; a2z <= 'Z'; a2z++)
	{
		putchar(a2z);
	}
	putchar('\n');
	return (0);
}
