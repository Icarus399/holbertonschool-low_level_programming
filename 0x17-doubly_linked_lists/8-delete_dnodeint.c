#include "lists.h"
/**
 * *delete_dnodeint_at_index - function that deletes the node at index of a 
 * dlistint_t linked list
 * @head: head.
 * @index: uint
 * Return: 1 if succeed, -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL, *tmp;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && cnt < index - 1)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
		cnt++;
	}
	node = tmp->next->next;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = node;
	return (1);
}
