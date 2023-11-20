#include "lists.h"
/**
 * print_int - print an integer
 * @a: integer to be printed
 * Return: 0 (sucess)
 */
int print_int(int a)
{
	if (a < 10)
	{
		_putchar(a + '0');
		return (0);
	}
	print_int(a / 10);
	_putchar((a % 10) + '0');
	return (0);
}

/**
 * print_listint - print the integers in a linkes list
 * @h: linked list header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	/*Iterate through the lsit*/
	while (h != NULL)
	{
		print_int(h->n);
		_putchar('\n');
		++count;
		h = h->next;
	}
	return (count);
}
