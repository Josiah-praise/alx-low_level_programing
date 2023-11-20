#include "lists.h"
/**
 * free_listint - free listint
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *next = NULL;

	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
