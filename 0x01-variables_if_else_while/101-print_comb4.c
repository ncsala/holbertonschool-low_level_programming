#include<stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
int hundreds = '0', tens = '0', ones = '1';

	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				ones += 1;
				if (hundreds < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			tens += 1;

		}
		hundreds  += 1;
	}
	putchar('\n');

	return (0);
}

