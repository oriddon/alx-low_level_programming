#include "lists.h"

/**
 * print_listint -This prints all the elecment of the linked list for the project
 * h- linked the list of type listint_t to print here
 * Return- This retuns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
