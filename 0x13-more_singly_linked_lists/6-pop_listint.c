#include "lists.h"
/**
 * pop_listint - pop the first node in a linked list
 * @head: pointer to node
 * Return: the n value of the node
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (0);
	
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}
