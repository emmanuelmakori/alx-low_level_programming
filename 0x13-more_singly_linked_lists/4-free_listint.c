#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node
 *
 * Return: NULL
*/
void free_listint(listint_t *head)
{
	listint_t *point;

	/*goes through each node in list*/
	while ((point = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(point);
	}
}
