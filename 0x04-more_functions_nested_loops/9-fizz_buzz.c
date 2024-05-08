#include <stdio.h>






void fizzbuzz(void);

/**
 *main - Entry point
 *Return: 0 (sucessful)
 */
int main(void)
{

	fizzbuzz();
	return (0);
}

/**
 *fizzbuzz - helper function
 *Return: no return value
 */
void fizzbuzz(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
}
