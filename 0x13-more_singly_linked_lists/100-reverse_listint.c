#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer to head
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
