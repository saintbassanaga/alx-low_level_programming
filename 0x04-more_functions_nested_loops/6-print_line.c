#include "main.h"

/**
 * print_line - render the line with n value
 * @n : number of times the character _ should be printed 
 *
 * Return : 0
 */

void print_line(int n)
{
	int i = 0;

	while (i < n &&  n>0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
