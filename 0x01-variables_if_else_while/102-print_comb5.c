#include <stdio.h>

void format(int c);
void putspace(void);
void space_comma(void);


/**
 *main - Entry Point
 *Description: Write a program that prints all possible
 *combinations of two two-digit numbers.
 *Return: 0 (sucessful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = (i + 1); j < 100; j++)
		{
			format(i);
			putspace();
			format(j);
			if (i != 98 || j != 99)
				space_comma();
		}
	}
	putchar('\n');
	return (0);
}



/**
  *putspace - helper frunction
  *Return: no return value
  */
void putspace(void)
{
	putchar(' ');
}



/**
  *format - helper function
  *Return: no return value
  *@c: integer parameter
  */
void format(int c)
{
	if (c > 9)
	{
		putchar('0' + (c / 10));
		putchar('0' + (c % 10));
	}
	else
	{
		putchar('0');
		putchar('0' + c);
	}
}

/**
  *space_comma - helper function
  *Return: no return value
  */
void space_comma(void)
{
	putchar(',');
	putchar(' ');
}
