#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to head
 * @n: integer
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	if (head == NULL)
		return (NULL);

	/*create new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (current->next)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
