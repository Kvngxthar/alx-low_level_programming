
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number abd states whether
 * it is postive, negative, or zero
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0);
int n = rand() - RAND_MAX / 2;
/*your code goes here*/
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", N);
return (0);
}
