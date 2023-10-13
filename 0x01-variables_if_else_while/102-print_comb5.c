#include <stdio.h>

/**
 *main - Entry Point
 *Description: Write a program that prints all possible
 *combinations of two two-digit numbers.
 *Return: 0 (sucessful)
 */
int main(void)
{
	int level1, level2, level3, level4;

	for (level1 = 0; level1 < 10; level1++)
	{
		for (level2 = 0; level2 < 10; level2++)
		{
			for (level3 = level1; level3 < 10; level3++)
			{
				for (level4 = 0; level4 < 10; level4++)
				{
					putchar('0' + level1);
					putchar('0' + level2);
					putchar(' ');
					putchar('0' + level3);
					putchar('0' + level4);
					if (level1 != 9 || level2 != 8 || level3 != 9 || level4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
