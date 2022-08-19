#include "hash_tables.h"

/**
 * key_index - gives you the index of key
 * @key: key :p
 * @size: size of the array
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;
	int i;

	if (!key || !size)
		return (0);
	k = hash_djb2(key);
	return (k % size);
}
