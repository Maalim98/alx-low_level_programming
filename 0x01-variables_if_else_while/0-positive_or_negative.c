#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - it prints  a random number and says it its negative or positive
 * Description: prints  if a number is positive or negative.
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
