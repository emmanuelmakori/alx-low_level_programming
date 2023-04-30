#include "lists.h"

/**
 * listint_len - returns the number of elements.
 *
 * @h:first node pointer
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t node_num = 1;

	/*return 0 as no of nodes when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of nodes*/
		if (h->n != '\0')
			node_num++;

		/*go to next node*/
		h = h->next;
	}

	return (node_num);
}
