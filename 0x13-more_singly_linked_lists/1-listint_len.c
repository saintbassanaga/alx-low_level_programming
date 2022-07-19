#include "lists.h"
#include <stdio.h>

/**
 * listint_len()- prints all the elements of a listint_t list.
 * @h : struct initialisation
 * Return: the number of nodes
 * You are allowed to use printf
*/

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
