/**
 * factorial - math function
 *@n: integer
 *Return: integer
*/
int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n == 1 ? 1 : n * factorial(n - 1));
}
