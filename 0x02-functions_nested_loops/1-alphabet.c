#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lowercase using functions
 */

void print_alphabet(void)
{
	char alltheletters = 'a';

	do {
		_putchar(alltheletters);
		alltheletters++;
	} while (alltheletters <= 'z');

	_putchar('\n');
}

