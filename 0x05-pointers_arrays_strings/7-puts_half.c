#include "main.h"
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

/**
 *puts_half - helper function
 *@str: character pointer;
 *Return: no return value
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start, i;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
