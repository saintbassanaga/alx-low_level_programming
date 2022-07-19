#include "lists.h"

/**
 * pop_listint()- delete the head's node .
 * @head: The head of the linked list
 * Return: the value of head node .
*/

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *hnode;
	int h;

	if (temp->next == NULL)
		return (0);
	h = temp->n;
	hnode = temp->next;

	free(temp);
	*head = hnode;
	return (h);
}
