#include<stdio.h>

/**
 * main - prints the alphabet
 * Return: 0
 */

int main(void)
{
        char alphabet = 'a';
	
        do {
                putchar(alphabet);
                alphabet++;
        } while (alphabet <= 'z');
        
	alphabet = 'A';

	do{
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');
	
	putchar('\n');
        return (0);
}

