
#include "main.h"
/**
 * more_numbers - unction that prints 10 times the numbers,
 * from 0 to 14 followed by a new line
 * Return: 0;
 */
void more_numbers(void)
{
	int x;
	int j;

	for (x = 0; x <= 9; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
