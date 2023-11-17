#include "lists.h"

/**
 * free_list - free list_t
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
