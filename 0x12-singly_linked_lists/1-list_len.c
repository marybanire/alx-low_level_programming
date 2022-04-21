#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of nodes in linked list
 **/
size_t list_len(const list_t *h)
{
size_t nelem;

nelem = 0;
while (h != NULL)
{
h = h->next;
nelem++;
}
return (nelem);
}
