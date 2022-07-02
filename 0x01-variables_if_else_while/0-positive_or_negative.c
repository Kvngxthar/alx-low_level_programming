#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - starting point of code running
 * checks if n is positive 
 * negative or zero
 *
 * Return:0 is successful 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2 

	/* your code goes here */
	if (n > 0)
	        printf("%d is positive\n", n)
	/* checker for negative */
	else if (n < 0)
	        printf("%d is negative\n", n);
	/* then it can only be zero */
	else
	        printf("%d is zero\n", n);
	return (0);
