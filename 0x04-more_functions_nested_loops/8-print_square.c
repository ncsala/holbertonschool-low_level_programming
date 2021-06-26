#include "holberton.h"

/**
 * print_square - prints a square
 * @size: int number
 * Return: void
 */

void print_square(int size)
{
	int base, height;

	for (height = 0; height < size; height++)
	{
		for (base = 0; base < size; base++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}


