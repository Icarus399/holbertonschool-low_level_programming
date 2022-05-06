#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint list
 * @h: const
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int a;

	if (h == 0)
		return (0);

	a = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
