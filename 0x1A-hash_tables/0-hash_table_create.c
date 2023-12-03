#include "hash_tables.h"

/**
 * hash_table_create - initialize and hash table
 * @size: the size of the new table
 * Return: a new table or null if somenthing went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->array = malloc(sizeof(table->array) * size);
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	return (table);

	/**
	 *hash_table_t *table = NULL;
	hash_node_t **array;


	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	return (table);
	*/
}
