#include <stdio.h>

/**
 * main - Entry point
 * Return: alphabets in lower case reverse order
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
