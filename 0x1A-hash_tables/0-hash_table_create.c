#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of array
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *table;

	array = malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(array);
		return (NULL);
	}
	table->array = array;
	table->size = size;

	return (table);
}
