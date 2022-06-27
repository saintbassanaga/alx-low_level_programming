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
	unsigned int i, j;
	char *c;
	size_t n = sizeof(str);

	if (n == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		c[j] = str[j];

	return (c);

}
