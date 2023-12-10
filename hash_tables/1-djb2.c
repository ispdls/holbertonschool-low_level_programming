#include "hash_tables.h"
/**
  * hash_djb2 -hash function implementing the djb2 algorithm.
  * @str: string
  * Return: hashed value
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int i;

	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;
	return (hash);
}
