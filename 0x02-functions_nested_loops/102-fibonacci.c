#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter = 1;
	long int num1 = 1, num2 = 2, fn;

	printf("%li, %li", num1, num2);

	do {
		fn = num1 + num2;
		printf(" ,%li", fn);
		num1 = num2;
		num2 = fn;
		counter += 1;
	} while (counter <= 48);

	printf("\n");

	return (0);
}
