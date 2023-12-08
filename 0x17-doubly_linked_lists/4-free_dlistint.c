#include "lists.h"

/**
* free_dlistint - print
* @head: header
*
* Return: number or nodes
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
