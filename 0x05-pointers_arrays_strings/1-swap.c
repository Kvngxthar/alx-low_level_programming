#include <main.h>
#include <stdio.h>

/**
 * swaps two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b);
{
	int a;
	int b;
	
	a = 98;
	b = 42;

	swap_int(&a, &b);
}
