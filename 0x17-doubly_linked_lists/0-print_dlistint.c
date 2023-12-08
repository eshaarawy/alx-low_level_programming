#include "lists.h"

/**
* print_dlistint - print
* @h: header
*
* Return: number or nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
