#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at inex n
 * @head: jead node
 * @index: index of node starting from 0
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int _index = 0;

	if (head == NULL)
		return (NULL);

	while (current)
	{
		if (_index == index)
			return (current);
		current = current->next;
		_index++;
	}
	return (NULL);
}
