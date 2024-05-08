#include <stdio.h>
/**
 *main - Entry Point
 *Description: Write a program that prints the alphabet
 *in lowercase, followed by a new line
 *Return: 0 (sucessful)
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z' ; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
