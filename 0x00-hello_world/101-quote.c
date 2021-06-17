#include<unistd.h>
#include<string.h>

/**
 *  main - prints to stand err
 *
 *  Return: 1
 */

int main(void)
{
	char txt[]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, txt, strlen(txt));
	return (1);
}

