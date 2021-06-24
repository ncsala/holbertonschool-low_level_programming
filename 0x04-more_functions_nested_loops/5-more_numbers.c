#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int r, s = 1;

	while (s <= 10)
	{
		for (r = 0;  r < 15 ; r++)
		{
			if (r > 9)
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}

		s++;
		_putchar('\n');
	}
}
