#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - starting point of code running
 * checks if last digit of n is greater than 5
 * less than 6 and not 0
 * if its zero
 * Return: 0 is successful
 */
int main(void)
{
	/* random number is n and its last digit is l */
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	/* store last digit of n array n[-1] as l */
	l = n % 10;

	/* checker if last digit is greater than 5 */
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	/* checker if last digit is zero */
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	/* then it can only be less than 6 and not zero */
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}

