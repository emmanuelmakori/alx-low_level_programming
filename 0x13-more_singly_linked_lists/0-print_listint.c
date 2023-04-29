#include "list.h"
#include <stdio.h>

/**
 * Return: an int.
 **/
int main(void){
	return 0;


}
size_t print_listint(const listint_t *h)
{
	const listint_t *foward;
	unsigned int center = 0;

	foward = h;
	while (foward)
	{
		printf("%d\n", foward->n);
		center++;
		foward = foward->next;
	}
	return (center);
}
