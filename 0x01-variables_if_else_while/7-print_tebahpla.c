#include<stdio.h>

/**
 * main - prints alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
