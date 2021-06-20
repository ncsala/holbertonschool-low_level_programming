#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int tens, ones, tens2 = '0', ones2 = '0';
		
	while (tens2 <= '9')
	{
		while (ones2 <= '9')
		{	
			tens = tens2;	
			while (tens <= '9')
			{	
				ones = ones2 + 1;
				while (ones <= '9')
				{
					putchar(tens2);
					putchar(ones2);
					putchar(' ');
					putchar(tens);
					putchar(ones);
			
					ones += 1;
					if (tens < '9')
					{
						putchar(',');
						putchar(' ');
					}

				}
				ones = '0';
				tens += 1;
			}
			ones2 += 1;
		}
		tens2 += 1;
	}
	putchar('\n');
}
