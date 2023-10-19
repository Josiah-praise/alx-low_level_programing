/**
 *format_two - helper function
 *Return: 0 (sucessful)
 *@n: integer
 */
int format_two(int n)
{
	if (n > 9 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putcahr('0' + (n % 10));
	}
	else 
	{
		_putchar('0' + n);
	}

	return (0);
}


int format_three(int n)
{
	if (n > 99 && n < 1000)
	{
		_putchar('0' + (n / 100));
		format_two(n % 100)
	}
	else if (n > 999 && n < 10000)
	
	return (0);
}

int 
/**
 *print_number - utility function
 *@n: integer character
 *Return: no return value
 */
void print_number(int n)
{
	
}


