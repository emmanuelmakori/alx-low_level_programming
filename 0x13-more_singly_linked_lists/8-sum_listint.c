#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list.
 *
 * @head: pointer to the first node
 *
 * Return: the total of all (n)
*/
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		/* add n to total*/
		total += head->n;
		/*go to the next*/
		head = head->next;
	}

	/*if list will be empty it will return sum = 0*/
	return (total);
}
