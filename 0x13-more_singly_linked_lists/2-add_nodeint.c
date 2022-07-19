#include "lists.h"

/**
 * add_nodeint()-add a new node to the list
 * @head: pointer to next node
 * @n: node value
 * Return: address of next node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
