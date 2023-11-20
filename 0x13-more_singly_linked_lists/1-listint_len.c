#include "lists.h"
/**
 * listint_len - get the number of nodes
 * Return: the number of nodes
 * @h: the node to count from
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
