#include "lists.h"
/**
 * get_node_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: list
 * @index: num of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int index = 0;

	while (idx < index && head != NULL)
	{
		tmp = head->next;
		head = tmp;
		idx++;
	}

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
}

