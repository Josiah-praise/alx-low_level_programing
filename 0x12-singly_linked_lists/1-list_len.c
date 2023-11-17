#include "lists.h"

/**
 * list_len - gets the length of a linked list
 * @h: pointer to the first element
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
