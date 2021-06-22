#include<unistd.h>

/**
 * _putchar - writes the character to standart output
 * Return: 1 on suces -1 on error  
 */

int _putchar(char c)
{
	return (write(1, &c,1)); 
}
