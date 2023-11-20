#include "lists.h"
/**
 * free_listint2 - free listint
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *next = NULL;

	if (head == NULL)
		exit(98);

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
