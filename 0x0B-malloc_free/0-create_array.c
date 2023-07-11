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
	char *arrPtr;
	unsigned int i;

	arrPtr = (char *)malloc(size);

	if (size == 0 || arrPtr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arrPtr[i] = c;

	return (arrPtr);
}
