#include "holberton.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	int r = 0;

	if (c > 64 && c < 91)
		r = 1;

	return (r);
}
