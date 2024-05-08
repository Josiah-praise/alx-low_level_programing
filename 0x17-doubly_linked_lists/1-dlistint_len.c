#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
