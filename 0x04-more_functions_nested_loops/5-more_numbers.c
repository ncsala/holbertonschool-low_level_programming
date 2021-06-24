#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

int main(void)
{
	more_numbers();
	return (0);
}

void more_numbers(void)
{
	int r = 0;

	for (; r < 15 ; r++)
	{
		_putchar(r);
		if (r > 9)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		else
		{
			_putchar(r + '0');
		}
	_putchar('\n');
	}

}
