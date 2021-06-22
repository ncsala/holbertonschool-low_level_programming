#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: letters from a to z in ASCII
 *
 * Return: 1 if c is lowercase.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');
}

