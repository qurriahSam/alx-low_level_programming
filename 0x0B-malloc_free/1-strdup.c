#include <stdlib.h>

/**
 * *_strdup - returns a pointer coplicate of string
 *
 * @str: String to be coplicated
 *
 * Return: Null if str is null pointer otherwise
 */
char *_strdup(char *str)
{
	int length;
	int i;
	int j;
	char *cop;

	length = 1;
	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	cop = malloc(sizeof(char) * length);
	if (cop == 0)
	{
		return (0);
	}
	for (j = 0; j < length; j++)
	{
		cop[j] = str[j];
	}
	return (cop);
}
