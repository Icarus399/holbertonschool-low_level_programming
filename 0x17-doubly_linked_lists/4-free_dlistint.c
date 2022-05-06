#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 *@head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
