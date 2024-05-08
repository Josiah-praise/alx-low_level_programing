#include "lists.h"
/**
 * add_nodeint_end - add node to the end
 * @head: pointer to pointer to node
 * @n: integer
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *current = *head;

	if (head == NULL)
		return (NULL);
	/*create new node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
