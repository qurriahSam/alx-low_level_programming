#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int l;
	char *p;

	for (l = 0; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
		{
			p = &s[l];
			return (p);
		}
	}

	return (NULL);
}
