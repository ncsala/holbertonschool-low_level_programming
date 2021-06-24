#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: void
 */

void print_numbers(void)
{
	char r;

	for (r = 0; r <= 9; r++)
		_putchar(r + '0');

	_putchar('\n');

}

