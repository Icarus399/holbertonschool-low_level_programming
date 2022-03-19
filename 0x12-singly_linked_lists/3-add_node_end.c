#include "lists.h"
/**
 * add_node_end - function that adds a node at the end of a list
 * @head: head
 * @str: string
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk;
	list_t *l = *head;

	lk = malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);
	lk->len = strlen(str);
	lk->next = NULL;

	if (*head == NULL)
	{
		*head = lk;
		return (lk);
	}
	else
	{
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = lk;
	}
	return (lk);
}
