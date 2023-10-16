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
 *puts2 - helper function
 *@str: character pointer;
 *Return: no return value
 */
void puts2(char *str)
{
	int i, last_index, n;

	last_index = _strlen(str) - 1;


	if (_strlen(str) % 2 != 0)
		n = (_strlen(str) - 1) / 2;
	else
		n = _strlen(str) / 2;


	for (i = n; i <= last_index; i++)
		_putchar(str[i]);
	_putchar('\n');
}
