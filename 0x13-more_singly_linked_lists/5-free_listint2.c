#include "lists.h"

/**
 * free_listint2()-free list of integer
 * @head: pointer to the list
 * Return: 0
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		temp = NULL;
	}
}
