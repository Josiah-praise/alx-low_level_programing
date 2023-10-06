#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *
 *Description: This program will assign a random number
 *to the variable n each time it is executed.
 *Return: 0 (Sucessful)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
