#include "holberton.h"

/**
 * _abs: Write a function that computes the absolute value of an integer. 
 * @n: number to convert to an absolute number
 *
 * Return: return always absolute number.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	return (-n);

	_putchar('\n');
}

