#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to node
 * @idx: the index
 * @n: the data(n) of new node
 * Return: pointer to the new node created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new_node = NULL;
	listint_t *prev = NULL, *current = *head;

	if (head == NULL)
		return (NULL);

	/*create new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (current != NULL && index != idx)
	{
		prev = current;
		current = (current)->next;
		index++;
	}
	/*if you want to insert at index 0*/
	if (index == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (*head);
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		prev->next = new_node;
		new_node->next = current;
	}
	return (new_node);
}
