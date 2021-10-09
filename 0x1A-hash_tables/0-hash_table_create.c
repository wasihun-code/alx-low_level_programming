#include "hash_tables.h"
#define FIRST 16

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = malloc(sizeof(hash_table_t));

    if (table == NULL)
	return NULL;

    table->size = size;

    table->array = calloc(table->size, sizeof(size));
    if (table->array == NULL)
    {
	free(table);
	return NULL;
    }
    return table;
}
