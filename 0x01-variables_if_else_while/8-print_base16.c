#include<stdio.h>

/**
 * main - prints
 *
 * Return: 0
 */

int main(void)
{
	char hexa = 48;

	do {
		putchar(hexa);
		hexa++;
	} while (hexa < 58);
	hexa = 97;

	do {
		putchar(hexa);
		hexa++;
	} while (hexa < 103);
	putchar('\n');
	return (0);
}


