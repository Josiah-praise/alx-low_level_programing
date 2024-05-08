#include "lists.h"
/**
 *_strlen - helper function
 *@s: character pointer;
 *Return: lenght of the string
 */
int _strlen(const char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		continue;
	return (size);
}

/**
 * add_node_end - adds a node to a linked list at the end
 * @head: a pointer to a linked list pointer
 * @str: a string
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head, *newnode = NULL;

	if (head == NULL)
		return (NULL);
	/* If the list is empty, create the first node */
	if (*head == NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);
		newnode->str = strdup(str);
		if (newnode->str == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(str);
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	while (current->next != NULL) /* Traverse the list until the last node */
		current = current->next;
	newnode = malloc(sizeof(list_t)); /* Create a new last node */
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = _strlen(str);
	newnode->next = NULL;
	current->next = newnode; /* Link the new node to the last node */
	return (newnode);
}
