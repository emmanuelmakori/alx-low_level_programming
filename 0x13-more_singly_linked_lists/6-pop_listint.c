#include "lists.h"

/**
 * pop_listint - deletes the head of the node
 *
 * @head: pointer to the first node
 *
 * Return: the head's node's info
*/
int pop_listint(listint_t **head)
{
	int first;
	listint_t *temp, *next;

	/*if list is empty return NULL*/
	if (*head == NULL)
		return (0);

	/*set head addres to temp*/
	temp = *head;
	/*get addres of next node*/
	next = temp->next;
	/*get element of node one*/
	first = temp->n;

	/*free node one*/
	free(temp);

	/*set head to node two*/
	*head = next;

	/*return element of node one*/
	return (first);
}
