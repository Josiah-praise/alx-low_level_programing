#include "lists.h"

/**
 * print_dlistint - prints all elements in a dlistint_t list
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
