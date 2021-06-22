#include<stdio.h>


int main(void)
{
	int c, d;

			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{	
					putchar(58);
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
}
