#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int tens = '0', ones = '1', tens2 = '0', ones2 = '0';
		
	for (; tens2 <=  '9'; tens2++)
	{	
		for (; ones2 <= '9'; ones2++)
		{
			for (; tens <= '9'; tens++)
			{
				for (ones = tens + 1; ones <= '9'; ones++)
				{
					putchar(tens2);
					putchar(ones2);
					putchar(tens);
					putchar(ones);
					putchar(',');
					putchar(' ');
					
				}
//				ones = '0'; //se tiene q resetear pq sino illega a nueve y se acaban todos los for
			}
			tens = '0';
		}
		ones2 = '0';
	}


	
	putchar('\n');
}
