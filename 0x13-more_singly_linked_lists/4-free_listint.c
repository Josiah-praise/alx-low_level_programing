#include "lists.h"
/**
 * free_listint - free listint
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
