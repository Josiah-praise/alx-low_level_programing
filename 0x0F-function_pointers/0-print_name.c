#include <stdlib.h>
/**
 * print_name - prints name
 * @name: string
 * @f: function popinter
 * Return: no return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
