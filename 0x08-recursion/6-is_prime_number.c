int is_prime(int n, int a);
int is_prime_number(int n);

/**
 *is_prime - math function
 *Return: 0 if not a prime number and 1 if otherwise
 *@n: integer
 *@a: integer
 *Description: checks if n is a prime number by checking
 *				if it's divisible values within the range of
 *				a - 1
 *note that a should be n / 2.
 */
int is_prime(int n, int a)
{
	if (a == 1)
		return (1);
	return (((n % a) == 0) ? 0 : is_prime(n, a - 1));
}


/**
 *is_prime_number - math function
 *Return: 0 if not a prime number and 1 if otherwise
 *@n: integer
 *Description: checks if n is a prime number
 */
int is_prime_number(int n)
{
	int a;

	if (n == 1 || n == -1)
		return (0);
	a = n / 2;
	return (is_prime(n, a));
}
