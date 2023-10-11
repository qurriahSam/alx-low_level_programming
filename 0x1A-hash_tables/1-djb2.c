#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int a;

	hash = 5381;
	while ((a = *str++))
	{
		hash = ((hash << 5) + hash) + a; /* hash * 33 + c */
	}
	return (hash);
}
