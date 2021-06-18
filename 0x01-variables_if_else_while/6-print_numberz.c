#include<stdio.h>

/**
 * main - prints numbers 0 to 9
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
