#include "hash_tables.h"

/**
 * hash_djb2 - function thst Hash function implementing the djb2 algorithm.
 * @str: The string
 *
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int d;

	hash = 5381;
	while ((d = *str++))
		hash = ((hash << 5) + hash) + d; /* hash * 33 + d */

	return (hash);
}
