#include "main.h"

/**
 *jack_bauer - timer
 *Description:  prints every minute of the day of
 *Jack Bauer, starting from 00:00 to 23:59
 *Return: Void
 */
void jack_bauer(void)
{
	int lvl1, lvl2, lvl3, lvl4, max2, max4;

	for (lvl1 = 0; lvl1 < 3; lvl1++)
	{
		if (lvl1 == 2)
			max2 = 4;
		else
			max2 = 10;
		for (lvl2 = 0; lvl2 < max2; lvl2++)
			for (lvl3 = 0; lvl3 < 6; lvl3++)
			{
				max4 = 10;
				for (lvl4 = 0; lvl4 < max4; lvl4++)
				{
					_putchar('0' + lvl1);
					_putchar('0' + lvl2);
					_putchar(':');
					_putchar('0' + lvl3);
					_putchar('0' + lvl4);
					_putchar('\n');
				}
			}
	}
}
