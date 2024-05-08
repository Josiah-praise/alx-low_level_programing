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
 * add_node - adds a node to a linked list
 * @head: a pointer to a linked list pointer
 * @str: a string
 * Return: a pointer to a list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (NULL);

	/*create new node*/
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)/*if allocation fails*/
		return (NULL);
	(newnode)->str = strdup(str); /*duplicate string dynamically*/
	if ((newnode)->str == NULL) /*if strdup fails*/
	{
		free(newnode);
		return (NULL);
	}
	(newnode)->next = *head;
	(newnode)->len = _strlen(str);
	*head = newnode;
	return (newnode);
}
