#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14,10 times
 * Return: none
 */

void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
