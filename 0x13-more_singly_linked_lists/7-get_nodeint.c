#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to first node
 * @index: the index of node to get
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL && a != index)
	{
		head = head->next;
		++a;
	}
	if (head != NULL)
		return (head);
	else
		return (NULL);
}
