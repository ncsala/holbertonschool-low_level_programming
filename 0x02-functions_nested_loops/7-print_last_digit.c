#include "holberton.h"

/**
 * print_last_digit: prints the last digit of a number.
 * @n: given number
 * @residue: last digit
 *
 * Returns: value of the last digit.
 */

int print_last_digit(int n)
{
	int residue = n % 10;

	if (n < 0)
		n *= -1;
	
	_putchar('0' + residue);
	
	return (residue);	
}

