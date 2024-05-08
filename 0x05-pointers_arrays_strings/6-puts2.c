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
	int i, last_index;

	last_index = _strlen(str) - 1;

	for (i = 0; i <= last_index; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
