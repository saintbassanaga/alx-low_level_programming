#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(c));

	if (ar == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}

