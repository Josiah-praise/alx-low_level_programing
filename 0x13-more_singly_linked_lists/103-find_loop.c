#include "lists.h"
/**
 * find_listint_loop - find the start of the loop in a linked list
 * @head: pointer to the start of the linked list
 * Return: pointer to the start of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	slow = head;
	fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = slow->next;
	fast = head->next->next;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

