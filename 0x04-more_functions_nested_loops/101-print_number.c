#include <stdio.h>

/**
 *print_number - helper function
 *@n: integer parameter
 *Return: no return value
 */
void print_number(int n)
{
	if (n >= 100 && n <= 999) /*This handles three digits positive numbers*/
	{
		int a, b, c, d;

		a = n % 10; /*a is the third digit*/
		b = n / 10;
		c = b % 10; /*c is the second digit*/
		d = b / 10; /*d is the first digit*/
		putchar('0' + d); 
		putchar('0' + c);
		putchar('0' + a);
		putchar('\n');
	}
	else if (n >= 10 && n <= 99) /*This handles 2 digits positive numbers*/
	{
		int a, b;
		a = n % 10; /*a is the second digit*/
		b = n / 10;	/*b is the first digit*/
		putchar('0' + b);
		putchar('0' + a);
		putchar('\n');
	}
	else if (n <= -10 && n >= -99) /*This handles 2digits negative numbers*/
	{
		int a, b;

		a = -n % 10; /*b is the first digit*/
		b = -n / 10; /*a is the secod digit*/
		putchar('-');		
		putchar('0' + b);
		putchar('0' + a);
		putchar('\n');
	}
	else if (n >= 1000 && n <= 9999) /*This handles 3 digits posotive numbers*/
	{
		int a, b, c, d, e, f;

		a = n % 10; /*this is the fourth digit*/
		b = n / 10;
		c = b % 10; /*this is the third digit*/
		d = b / 10;
		e = d % 10; /*this is the second digit*/
		f = d / 10;	/*this is the first digit*/
		putchar('0' + f);
		putchar('0' + e);
		putchar('0' + c);
		putchar('0' + a);
		putchar('\n');
	}
	else if (n >= 0 && n <= 9) /*This handles single digit positive numbers*/
	{
		int a;

		a = n % 10;
		putchar('0' + a);
		putchar('\n');
	}
}

int main(void)
{

	print_number(98);
	print_number(0);
	print_number(1024);
	print_number(-98);
	return (0);
}

