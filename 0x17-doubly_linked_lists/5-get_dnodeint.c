#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets the nth node of a dlistint_t
 * @head: head
 * @index: int
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *l = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index)
	{
		if (l->next == NULL)
		{
			return (NULL);
		}
		l = l->next;
		count++;
	}
	return (l);
}
