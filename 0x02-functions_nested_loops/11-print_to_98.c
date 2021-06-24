#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98 follw by a new line
 * @n: integer number
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n = n + 1;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n = n - 1;
	}

	if (n == 98)
		printf("%i", n);

	printf("\n");
}
