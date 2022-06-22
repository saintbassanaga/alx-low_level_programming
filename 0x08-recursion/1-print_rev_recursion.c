#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 *@s : pointer to a char
 *Return : No.
 */


void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
