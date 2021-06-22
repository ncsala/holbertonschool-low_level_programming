#include "holberton.h"

/**
 * main - prints "Holberton"
 * Return: 0
 */

int main(void)
{
	char happyholbies[] = "Holberton";
	int r;

	for (r = 0 ; happyholbies[r] != '\0'; r++)
	{
		_putchar(happyholbies[r]);
	}
	_putchar('\n');

	return (0);
}
