#include "lists.h"
#include <stdio.h>

/**
 * Write a function that prints all the elements of a listint_t list.
 * Prototype: size_t print_listint(const listint_t *h);
 * Return: the number of nodes
 * Format: see example
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