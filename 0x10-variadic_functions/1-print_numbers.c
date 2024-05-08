#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints all the numbers passed
 * @separator: delimeter
 * @n: number of arguments
 * Return: No return value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list list;

	va_start(list, n);

	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
			if (i < (n - 1))
				printf("%s", separator);
		i++;
	}
	printf("\n");
}
