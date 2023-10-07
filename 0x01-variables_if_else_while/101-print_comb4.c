#include <stdio.h>

/**
* main - Print all the numbers of 000 to 999.
* Return: 0
*/

int main(void)
{
	int level1, level2, level3;

	for (level1 = 0; level1 < 10; level1++)
	{
		for (level2 = level1 + 1; level2 < 10; level2++)
		{
			for (level3 = level2 + 1; level3 < 10; level3++)
			{
				putchar('0' + level1);
				putchar('0' + level2);
				putchar('0' + level3);
				if (level1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

