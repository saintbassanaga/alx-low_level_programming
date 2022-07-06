#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name : pointer to name
 * @f : pointer to char function
 *
 * Return : Null
 */


__attribute__((unused)) void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL)
        (*f)(name);
}
