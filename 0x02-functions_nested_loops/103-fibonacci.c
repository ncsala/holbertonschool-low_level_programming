#include<stdio.h>

/**
 * main -
 * Return: 0
 */

int main(void)
{
	long int num1 = 1, num2 = 2, fn = 0, pairfn = 0;

	for (; fn <= 4000000;)
	{
		fn = num1 + num2;
		num1 = num2;
		num2 = fn;
		if ((num1 % 2) == 0)
		{
			pairfn = pairfn + num1;
		}
	}

	printf("%li", pairfn);
	printf("\n");

	return (0);
}
