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

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head node
 * @index: index of node to be deleted
 * Return: 1 sucess or 0 failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	dlistint_t *node;
	size_t len = dlistint_len(*head);

	if (len - 1 < index)
		return (-1);
	node = get_dnodeint_at_index(*head, index);
	if (index == 0)
	{
		if (node->next)
		{
			node->next->prev = NULL;
			*head = node->next;
			free(node);
		}
		else
		{
			free(node);
		}
	}
	else if (index == len - 1)
	{
		node->prev->next = NULL;
		free(node);
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(node);
	}
	return (1);
}
