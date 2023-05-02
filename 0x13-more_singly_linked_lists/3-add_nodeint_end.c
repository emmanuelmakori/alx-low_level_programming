#include "lists.h"

/**
 * add_nodeint_end - gets a new node end of the node
 *
 * @head: pointer to the first node of the list
 * @n: adds a new element to the node
 *
 * Return: the address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_new, *temp;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	/*this pionts at the element n*/
	node_new->n = n;
	node_new->next = NULL;

	temp = *head;

	/*place new_node first if head is NULL*/
	if (temp == NULL)
		*head = node_new;
	else
	{
		/*checks if heads and tails */
		while (temp->next != NULL)
			temp = temp->next;

		/*place node_new at the end*/
		temp->next = node_new;
	}

	return (*head);
}
