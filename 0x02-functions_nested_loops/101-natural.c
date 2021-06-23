#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: 0.
*/

int main(void)
{
	int r, accumulator;

	for (r = 1; r < 1024; r++)
	{
		if ((r % 5) == 0 || (r % 3) == 0)
		accumulator = accumulator + r;
	}
	
	printf("%i\n", accumulator);
	
	return (0);
}
