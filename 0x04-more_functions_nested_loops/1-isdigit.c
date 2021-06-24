#include "holberton.h"

/**
 * int _isdigit - Write a function that checks for a digit (0 through 9)
 * @c: receive any character
 * Return: Returns 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	return (c > 47 && c < 58);
}
