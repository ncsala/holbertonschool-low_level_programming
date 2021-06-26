#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: integer number
 * Return: 0
 */

int main(void)
{
	print_triangle(4);

	return (0);
}


void print_triangle(int size)
{
	int spaces, height, triangle = 1;

	for (height = 1; height <= size; height++)
	{
		for (spaces = size - triangle ; spaces > 1; spaces--)
		{
			_putchar('-');
		}

		for (; triangle <= (size - spaces); triangle++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

