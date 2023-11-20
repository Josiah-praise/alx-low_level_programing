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
 * print_list - print the elements of a linked list
 * @h: first node of list
 * @next: the next node
 * @count: the count of nodes
 * Return: the number of nodes
 */
size_t print_list(const listint_t *h, size_t count, listint_t *next)
{
	if (next == NULL)
	{
		print_int(h->n);
		_putchar('\n');
		return (++count);
	}
	print_int(h->n);
	_putchar('\n');
	count = print_list(next, count, next->next);
	return (++count);
}

/**
 * print_listint - print the integers in a linkes list
 * @h: linked list header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *next = NULL;

	if (h == NULL)
		return (0);
	next = h->next;
	return (print_list(h, COUNT, next));
}
