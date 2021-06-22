#include "holberton.h"

/*
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int alltheletters = 97;
	int contador = 1;

	for (; contador < 10; contador++)
	{
		while (alltheletters <= 122)
		{
			_putchar(alltheletters);
			alltheletters += 1;
		}
		alltheletters = 97;

		_putchar('\n');
	}
}
