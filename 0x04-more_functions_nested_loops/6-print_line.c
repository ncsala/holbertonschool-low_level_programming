#include "holberton.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: integer number
 * Return: void
 */

void print_line(int n)
{
	int aux;

	if (n > 0)
	{
		for (aux = 0; aux < n; aux++)
		{
		_putchar('_');
		}

	_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}

