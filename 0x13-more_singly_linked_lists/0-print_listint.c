#include "stdio.h"


/**
 * print_listint - prints all elements of a list
 *
 * @h: pointer to node one
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_number = 1;

	/* return 0 as no of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*next node*/
		h = h->next;
		/*count nodes*/
		node_number++;
	}

	/*print last node*/


	return (node_number);
}
