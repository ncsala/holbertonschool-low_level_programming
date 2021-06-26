#include "holberton.h"

/**
 * print_diagonal - print digonal
 * @n: int number
 * Return: void
 */

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}


void print_diagonal(int n)
{
	int aux, aux2;


	for (aux = 1; aux <= n; aux++)
	{
		for (aux2; aux2 < aux; aux2++)
		{
		_putchar('-');
		_putchar('\\');	
		}
	}
	_putchar('\n');

}
