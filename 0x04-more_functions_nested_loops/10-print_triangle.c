#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: integer number
 * Return: 0
 */

void print_triangle(int size)
{
	int spaces, height, triangle = 1;

	for (height = 1; height <= size; height++)
	{
		for (spaces = size - height ; spaces >= 1; spaces--)
		{
			_putchar(' ');
		}

		for (triangle = 1; triangle  <= height; triangle++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
