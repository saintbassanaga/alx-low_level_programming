#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;
	char *n = "Error\n";
	if (argc != 3)
	{ 
		while(n != '\0')
			_putchar(n);
		exit(98); 
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  
				while(n != '\0')
					_putchar(n);
				exit(98); 
			}
		}

	}
	mul = (int*)argv[1] *  (int*)argv[2];
	_putchar("%lu\n", mul);
return (0);
}
