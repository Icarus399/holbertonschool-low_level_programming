#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: list
 * Return: data
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int idx;

	if (*head != NULL)
	{
		idx = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	else
	{
		return ('\0');
	}
	return (idx);
}
