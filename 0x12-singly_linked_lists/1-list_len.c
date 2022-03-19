#include "lists.h"
/**
 * list_len - function that returns the lenght
 * @h: the head
 * Return: len
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
