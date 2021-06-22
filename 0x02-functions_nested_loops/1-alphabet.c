#include "holberton.h"

/**
 * main - prints alphabet in lowercase using functions
 * Return: void
 * */

void print_alphabet(void)
{
	char alltheletters = 'a';

	do {
		_putchar(alltheletters);
		alltheletters++;
	} while (alltheletters <= 'z');

	_putchar('\n');
}

