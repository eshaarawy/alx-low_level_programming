#include "lists.h"

/**
* sum_dlistint - print
* @head: header
*
* Return: number or nodes
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
