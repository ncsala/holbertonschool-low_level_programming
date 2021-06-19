#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * 
 * Return: 0
 */

int main(void)
{
	int r = 0;

	while (r <= 9)
	{
		putchar(r + '0');
		if (r < 9)
		{
			putchar(',');
			putchar(' ');
		}
		r += 1;
	}
	putchar('\n');

	return (0);
}

