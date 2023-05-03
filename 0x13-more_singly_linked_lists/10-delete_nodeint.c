#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node at index of the linked list specified
 * @head: double to the pointer
 * @index : the index of the node that should be removed
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Declaring list and variables*/
	listint_t *first = *head, *var;
	unsigned int i = 0;

	/*if head is empty*/
	if (*head == NULL)
		return (-1);

	if (index == 0) /*if index is start*/
	{
		*head = first->next;
		free(first);
		return (1);
	}

	while (first != NULL && i < (index - 1))
	{
		first = first->next;
		i++;
	}

	/*Check their current node and the next node*/
	if (first == NULL || first->next == NULL)
		return (-1);

	/*Delete the node which corresponds the index*/
	var = first->next;
	first->next = var->next;

	free(var);

	return (1);
}
