#include "lists.h"

/**
* add_dnodeint - print
* @head: header
* @n: value
*
* Return: number or nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!head || !node)
		return (node ? free(node), NULL : NULL);

	node->n = n;
	node->prev = NULL;
	if (!*head)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (node);
}
