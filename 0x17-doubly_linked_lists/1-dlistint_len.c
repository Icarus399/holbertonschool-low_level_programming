#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: head
 * Return: len var
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
