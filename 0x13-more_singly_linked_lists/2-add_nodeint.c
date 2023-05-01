#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node in the list
 *
 * Return: address or nothing
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	/*link first node in head with the new_node*/
	if (*head == NULL)
		node_new->next = NULL;
	else
		node_new->next = *head;

	node_new->n = n;
	/*add new node at the beginning */
	*head = node_new;

	/**this then returns the pointer to the head*/
	return (*head);
}
