#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *old;
	char *value_paste;
	unsigned long int index, r;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_paste = strdup(value);
	if (value_paste == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (r = index; ht->array[r]; r++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[r]->value);
			ht->array[r]->value = value_paste;
			return (1);
		}
	}

	old = malloc(sizeof(hash_node_t));
	if (old == NULL)
	{
		free(value_paste);
		return (0);
	}
	old->key = strdup(key);
	if (old->key == NULL)
	{
		free(old);
		return (0);
	}
	old->value = value_paste;
	old->next = ht->array[index];
	ht->array[index] = old;

	return (1);
}
