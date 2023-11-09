#include <stdarg.h>

/**
 * sum_them_all - sum all the arguments up
 * @n: number of arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
