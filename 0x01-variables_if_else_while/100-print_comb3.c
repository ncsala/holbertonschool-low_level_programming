#include<stdio.h>

/**
 * main - print combinations of two digit numbers
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
	int ones, tens = '0';

	for (; tens <= '9'; tens++)
	{
		for (ones = (tens + 1); ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (tens < '8')
			{
				putchar(',');
				putchar(' ');
			}
			

		}

	}
	putchar('\n');

	return (0);
}
