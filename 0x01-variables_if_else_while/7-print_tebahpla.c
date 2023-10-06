#include <stdio.h>
/**
 *main - Entry point
 *Description: Write a program that prints the lowercase alphabet
 *in reverse, followed by a new line.
 *Return: 0 (sucessful)
 */
int main(void)
{
	char alpha = 'z';

	for (; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
