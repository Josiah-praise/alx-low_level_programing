#include "lists.h"

/**
 * sum_dlistint - sums all the elements
 * @head: head node
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
