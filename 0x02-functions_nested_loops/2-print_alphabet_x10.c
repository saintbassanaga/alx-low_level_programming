#include "main.h"

/**
 *print_alphabet_x10 check point
 *
 **/

void print_alphabet_x10()
{
	char c='a';
	int i=0;
	while(i<10){
		while(c<='z'){
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
