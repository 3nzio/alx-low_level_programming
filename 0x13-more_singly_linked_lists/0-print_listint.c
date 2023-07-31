#include "lists.h"

/**
 * print_listint – Will print the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: Will return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}

