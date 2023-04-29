#include "list.h"

/**
 * print_listint - prints all listint_t list.
 *
 * @h: head node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
        size_t number = 0; // Initialize a variable to store the number of nodes
        struct list_head *pos; // Declare a pointer to a list_head structure

        // Use the list_for_each macro to iterate over the list
        list_for_each(pos, h) {
                // Get the parent container of the list entry using the list_entry macro
                listint_t *node = list_entry(pos, listint_t, head);
                // Print the integer value stored in the node
                printf("%d\n", node->n);
                // Increment the number of nodes
                number++;
        }
        // Return the number of nodes
        return (number);

}
