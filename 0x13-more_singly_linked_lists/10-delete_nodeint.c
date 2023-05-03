#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node which correspond to the index of a listint_t list.
 *
 * @head: this is the pointer to the address of head of the listint_t list.
 * 
 * @index: The index of the node not wanted.
 *
 * Return: for success = 1.
 *         for failure = -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *id = *head;
	unsigned int node;

	if (id == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(id);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (id->next == NULL)
			return (-1);

		id = id->next;
	}

	temp = id->next;
	id->next = temp->next;
	free(temp);
	return (-1);
}
