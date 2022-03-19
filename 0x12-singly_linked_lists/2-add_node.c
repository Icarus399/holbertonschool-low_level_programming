#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: head
 * @str: string
 * Return: second node
 */
	list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
