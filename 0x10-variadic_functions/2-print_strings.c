#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: a delimeter
 * @n: the number of strings passed
 * Return: no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *s;

	va_start(list, n);

	for (; i < n; i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
}
