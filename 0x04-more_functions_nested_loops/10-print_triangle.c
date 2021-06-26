#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: integer number
 * Return: 0
 */

void print_triangle(int size)
{
	int spaces, height, triangle;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		triangle = height;
		for (spaces = size - triangle ; spaces >= 1; spaces--)
		{
			_putchar(' ');
		}

		spaces = size - triangle;
		for (triangle = 1; triangle  <= (size - spaces); triangle++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
