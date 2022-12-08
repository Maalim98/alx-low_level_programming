#include <stdio.h>

/**
 * main-prints sizes in bytes
 * Description: This program prints various sizes of various data types
 * Return:(0)
 **
  */

int main(void)

{
	char one;

	int two;

	long int three;

	long long int four;

	float five;

	printf("Size of a char: %lu byte\(s\)\n", sizeof(c));

	printf("Size of an int: %lu byte\(s\)\n", sizeof(i));

	printf("Size of a long int: %lu byte\(s\)\n", sizeof(long int));

	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(long long int));

	printf("Size of a float: %lu byte\(s\) \n", sizeof(f));

	return (0);
}
