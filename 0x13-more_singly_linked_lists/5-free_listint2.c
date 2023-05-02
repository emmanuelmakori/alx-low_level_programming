#include "lists.h"

/**
 * free_listint2 - this frees the head and sets 
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *point, *temp;

	if (head != NULL)
	{
		/*set head addr to point*/
		point = *head;

		/*go  through the whole list*/
		/*set the current node to temp*/
		while ((temp =point) != NULL)
		{
			/*set next node to current node*/
			point = point->next;
			/*free temp from the present node*/
			free(temp);
		}

		*head = NULL;
	}
}
