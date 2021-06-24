#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, outcome;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);

		for (column =0; column <= 9; column++)
		{
			outcome = (row * column);
			
			_putchar(44);
			_putchar(32);

			if (outcome <= 9)
			{
				_putchar(32);
				_putchar(outcome + 48);
			}
			else
			{
				_putchar((outcome / 10) + 48);
				_putchar((outcome % 10) + 48);
			}


		}
	
	_putchar('\n');
	}
}
