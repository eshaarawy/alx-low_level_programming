#include "lists.h"

/**
* dlistint_len - print
* @h: header
*
* Return: number or nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
