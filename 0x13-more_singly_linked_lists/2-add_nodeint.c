#include "lists.h"
/**
 * add_nodeint - add a node to the begining of a linked list
 * @head: pointer to pointer to node
 * @n: integer to be added
 * Return: the address to the first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	
	if (*head == NULL || head == NULL) /*check for null pointers*/
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	/*If malloc fails*/
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
