#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: size
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *idx = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (idx == NULL)
		return (NULL);

	idx->array = malloc(sizeof(hash_node_t *) * size);
	idx->size = size;

	if (idx->array == NULL)
		return (NULL);

	for (; i < size; i++)
		idx->array[i] = NULL;

	return (idx);
}
