#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument number
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s", *(argv + i));
		putchar('\n');
		i++;
	}
	return (0);
}
