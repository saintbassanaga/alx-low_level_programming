#include "lists.h"

/**
 * free_listint()-free list of integer
 * @head: pointer to the list
 * Return: 0
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
