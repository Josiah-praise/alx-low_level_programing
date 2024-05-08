#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @index: the index of the node to delete
 * @head: pointer to pointer to starting node
 * Return: 1 (sucess) or -1(failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL, *prev = NULL;
	unsigned int idx = 0;

	if (head == NULL)
		return (-1);
	if (index == 0 && *head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current != NULL && index != idx)
	{
		prev = current;
		current = current->next;
		++idx;
	}
	if (current == NULL)
	{
		return (-1);
	}
	else
	{
		prev->next = current->next;
		free(current);
	}
	return (1);
}
