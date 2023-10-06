#include <stdio.h>
/**
 *main - Entry point
 *Description: Write a program that prints the alphabet
 *Return: 0 (sucessful)
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
