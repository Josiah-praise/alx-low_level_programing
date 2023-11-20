#include "lists.h"
/**
 * print_listint - print the integers in a linkes list
 * @h: linked list header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/*Iterate through the lsit*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		++count;
		h = h->next;
	}
	return (count);
}
