#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all listint_t list.
 *
 * @h: head node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
