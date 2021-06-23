#include "holberton.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of Jack Bauer, starting 
 * from 00:00 to 23:59.
 * 
 * Return: void return
 */


void jack_bauer(void)
{
	int hour2, hour, min2, min;

	for (hour2 = 48; hour2 <= 50; hour2++)
	{
		for (hour = 48; hour <= 57; hour++)
		{
			for (min2 = 48; min2 <= 53; min2++)
			{
				for (min = 48; min <= 57; min++)
				{
					if (hour2 >= 50 && hour >= 52)
					break;
					_putchar(hour2);
					_putchar(hour1);
					_putchar(58);
					_putchar(min2);
					_putchar(min);
					_putchar('\n');
				}
			}
		}
	}
}
