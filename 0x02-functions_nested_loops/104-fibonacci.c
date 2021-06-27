#include<stdio.h>

/**
 * main - Write a program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter = 1;
	unsigned int num1 = 1, num2 = 2, fn;

	printf("%u, %u", num1, num2);

	do {
		fn = num1 + num2;
		printf(", %u", fn);
		num1 = num2;
		num2 = fn;
		counter += 1;
	} while (counter <= 96);

	printf("\n");

	return (0);
}

