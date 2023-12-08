#include "lists.h"

/**
* add_dnodeint_end - print
* @head: header
* @n: value
*
* Return: number or nodes
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *tmp;

	if (!head || !node)
		return (node ? free(node), NULL : NULL);

	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
	return (node);
}
