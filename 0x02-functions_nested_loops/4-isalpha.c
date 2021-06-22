#include "holberton.h"

/**
 * int _isalpha - checks for alphabetic character.
 * @c: ASCII from a to z and A to Z
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

	_putchar('\n');
}
