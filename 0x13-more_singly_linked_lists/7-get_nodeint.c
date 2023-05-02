#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index from linked list
 *
 * @head: pointer to the node one
 * @index: no of nodes available
 *
 * Return: node at nth index OR NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	/*go thorugh nodes in list till the index nth node*/
	for (p = 0; p < index && head != NULL; p++)
		head = head->next;

	/*return head*/
	return (head);
}
