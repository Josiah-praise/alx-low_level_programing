#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_space - print space
 * @str: char pointer
 * Return: no return value
 */
void print_space(const char *str)
{
	if (str[1] != 0)
		printf(", ");
}


/**
 * print_all - print all arguments
 * @format: format specifiers
 */
void print_all(const char *const format, ...)
{
	const char *str;
	const char *temp = format;

	va_list array;

	va_start(array, format);
	while (*temp)
	{
		switch (*temp)
		{
		case 'c':
			printf("%c", va_arg(array, int));
			print_space(temp);
			break;
		case 's':
			str = (va_arg(array, char *));
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			print_space(temp);
			break;
		case 'i':
			printf("%d", va_arg(array, int));
			print_space(temp);
			break;
		case 'f':
			printf("%f", va_arg(array, double));
			print_space(temp);
			break;
		default:
			break;
		}
		temp++;
	}

	va_end(array);
}
