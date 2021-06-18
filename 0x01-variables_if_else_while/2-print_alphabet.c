#include<stdio.h>

/**
 * main - prints the alphabet
 * 
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		putchar('\n');
		alphabet++;
	} while (alphabet < 'z');

	return (0);
}

