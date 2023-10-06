#include <stdio.h>

/**
 *main - Entry Point
 *Description: Write a program that prints all single digit numbers of base
 *10 starting from 0, followed by a new line.
 *Return: 0 (sucessful)
 */
int main(void)
{
	int count = 0;

	for (; count < 10; count++)
		putchar('0' + count);
	putchar('\n');
	return (0);
}
