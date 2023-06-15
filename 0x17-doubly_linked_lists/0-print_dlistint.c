#include "lists.h"

/**
 *
 *
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* while we have a pointer to the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
