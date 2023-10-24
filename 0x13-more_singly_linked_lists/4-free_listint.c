#include "lists.h"

/**
* free_listint - prints a linked lists
* @head: pointer to first node
* Return: size of list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
