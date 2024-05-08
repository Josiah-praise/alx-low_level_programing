#include <stdio.h>
/**
 *main - Entry Point
 *Description: Write a program that prints all possible
 *combinations of single-digit numbers.
 *Return: 0 (sucessful)
 */
int main(void)
{
	int count = 0;

	for (; count < 10; count++)
	{
		putchar('0' + count);
		if (count != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
