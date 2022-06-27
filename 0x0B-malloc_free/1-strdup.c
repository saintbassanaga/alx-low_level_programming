#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: array of a character
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *c;
	size_t n = sizeof str ;

	if (n == 0)
		return (NULL);
	c = malloc(sizeof(char)*sizeof str);
	if (str == 0)
		return (NULL);
	for(i =0; i<n; i++)
		c[i]=str[i];

	return (c);

}
