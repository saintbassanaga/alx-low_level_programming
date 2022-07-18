#include "lists.h"
#include <stdio.h>

/**
 * print_listint()- prints all the elements of a listint_t list.
 * @h : struct initialisation
 * Return: the number of nodes
 * You are allowed to use printf
*/

size_t print_listint(const listint_t *h){
    size_t nnodes =0;
    while (h!=NULL){
      printf("%d\n", h->n);
        h=h->next;
        nnodes++;
    }
    return nnodes;
}