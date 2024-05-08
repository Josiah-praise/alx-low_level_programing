#include <stdio.h>

/**
 *main - Entry Point
 *Description: Write a program that prints all single digit numbers
 *of base 10 starting from 0, followed by a new line.
 *Return: 0 (sucessful)
 */
int main(void)
{
	char numbers = '0';

	for (; numbers <= '9'; numbers++)
		putchar(numbers);
	putchar('\n');
	return (0);
}
