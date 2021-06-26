#include "holberton.h"

/**
 * print_diagonal - print digonal
 * @n: int number
 * Return: void
 */

void print_diagonal(int n)
{
	int aux, aux2;


	if (n > 0)
	{
		for (aux = 1; aux <= n; aux++)
		{
			for (aux2 = 1; aux2 < aux; aux2++)
				_putchar(' ');
			_putchar(' ');
			_putchar('\\');
		}

	}
	else
	{
		_putchar('\n');
	}
}
