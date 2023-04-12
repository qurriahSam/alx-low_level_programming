#include <stdlib.h>
/**
 * *create_array - The array that is returned
 *
 * @size: The size of the array
 * @c: First letter
 * Return: null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int i;

	arry = malloc(size * sizeof(char));

	if (size == 0 || arry == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}
	return (arry);
}
