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
	int len;
	int i;
	int j;
	char *copy_str;

	len = 1;

	if (str == 0)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	copy_str = malloc(sizeof(char) * len);

	if (copy_str == 0)
	{
		return (0);
	}

	for (j = 0; j < len; j++)
	{
		copy_str[j] = str[j];
	}

	return (copy_str);
}
