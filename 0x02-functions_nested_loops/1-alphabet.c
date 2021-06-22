#include "holberton."

/**
 * main - prints alphabet in lowercase using functions
 * Return: 0
 */

void print_alphabet(void)
{
	char alltheletters = 'a';

	do {
		_putchar(alltheletters);
		alltheletters++;
	} while (alltheletters <= 'z');

	_putchar('\n');

	return (0);
}

