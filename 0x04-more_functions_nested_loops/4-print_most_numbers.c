#include "main.h"

/**
 *print_most_numbers - print all number from 0 to 9 excepting 2 and 4
 *
 *Return: Always 0
 */

void print_most_numbers(void)
{
	char c=0;
	while (c<=9)
	{
		if (c!=2 && c!=4)
		{
			_putchar('0' +c);
		}

		c++;
	}
	_putchar('\n');
}

