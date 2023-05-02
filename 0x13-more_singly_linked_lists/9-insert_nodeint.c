#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the node one
 * @id: is the index of the list where the new node should be added at
 * @n: element to add to the new node
 *
 * Return: NULL or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int id, int n)
{
	listint_t *node_new, *point;
	unsigned int index;

	point = *head; /*place first node at point*/

	node_new = malloc(sizeof(listint_t));
	if ((*head == NULL && id != 0) || node_new == NULL)
		return (NULL);

	node_new->n = n; /* add our element to the new node*/

	/*iterate list to node position id - 2*/
	for (index = 0; head != NULL && index < id - 1; index++)
	{
		point = point->next;
		if (point == NULL)
			return (NULL);
	}

	if (id == 0) /*if the index for new node is 0*/
	{
		/*first node will be moved to second node*/
		node_new->next = *head;
		/*new node will be placed as the first node*/
		*head = node_new;
	}
	else if (point->next) /*if index where to add our new node is not 0*/
	{
		node_new->next = point->next; /*place point node after new node*/
		point->next = node_new;/*set the new node at index id*/
	}
	else /*if node position is not present in the list*/
	{
		node_new->next = NULL;/*set next addr as NULL, indicates last node*/
		point->next = node_new;/*set the new node at the last position in list*/
	}

	return (node_new);
}
