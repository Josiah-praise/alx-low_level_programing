#include "main.h"

int _strlen(char *s);

/**
  *print_rev - output function
  *@s: character pointer parameter
  *Return: no return value
  */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 *_strlen - helper function
 *@s: character pointer;
 *Return: lenght of the string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}
