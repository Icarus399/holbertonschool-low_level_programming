#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data of a dlistint list
 * @head: head
 * Return: cn
 */
int sum_dlistint(dlistint_t *head)
{
	int cnt = 0;
	dlistint_t *l = head;

	if (head == NULL)
		return (0);

	while (l != NULL)
	{
		cnt += l->n;
		l = l->next;
	}
	return (cnt);
}
