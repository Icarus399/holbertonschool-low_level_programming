#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n) of a
 *  listint_t linked list
 * @head: ihead of node
 * Return: idx
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int idx = 0;

	if (head == NULL)
	{
		return ('\0');
	}

	while (head != NULL)
	{
		idx += head->n;
		tmp = head->next;
		head = tmp;
	}
	return (idx);
}
