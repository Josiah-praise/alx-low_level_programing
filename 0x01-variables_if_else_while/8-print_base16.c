#include <stdio.h>
/**
 *main - Entry point
 *Description: Write a program that prints all the numbers of base 16,
 *followed by a new line.
 *Return: 0 (sucessful)
 */
int main(void)
{
	char alpha; 

	for (alpha = '0'; alpha <= 'f'; alpha++)
	{
		if ((alpha <= '9') || ((alpha >= 'a') && (alpha <= 'f')))
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
