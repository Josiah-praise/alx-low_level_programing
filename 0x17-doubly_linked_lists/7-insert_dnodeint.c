#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at specific index
 * @idx: the index
 * @n: the element
 * @h: pointer to head node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL || *h == NULL)
        return (NULL);

    dlistint_t *node;
    size_t len = dlistint_len(*h);
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (len - 1 < idx || new_node == NULL)
        return (NULL);
    new_node->n = n;
    node = get_dnodeint_at_index(*h, idx);
    if (idx == 0)
    {
        new_node->next = node;
        new_node->prev = NULL;
        node->prev = new_node;
        *h = new_node;
    }
    else
    {
        new_node->next = node;
        node->prev->next = new_node;
        new_node->prev = node->prev;
        node->prev = new_node;
    }
    return (new_node);
}
