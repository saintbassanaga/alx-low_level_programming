#include "main.h"

/**
 *print_most_numbers - print all number from 0 to 9 excepting 2 and 4
 *
 *Return: Always 0
 */

void print_most_numbers(void)
{
	char n = 0;
	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		c++;
	}
	_putchar('\n');
}

