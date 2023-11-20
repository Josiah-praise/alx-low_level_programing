#include "lists.h"
/**
 * count_list - count the odes in a linked list
 * @count: the current count
 * @head: the current node
 * Return: the number of nodes
 */
size_t count_list(const listint_t *head, size_t count)
{
	if (head->next == NULL)
		return (++count);
	count = count_list(head->next, count);
	return (++count);
}

/**
 * listint_len - get the number of nodes
 * Return: the number of nodes
 * @h: the node to count from
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (count_list(h, COUNT));
}
