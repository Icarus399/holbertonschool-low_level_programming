#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: int
 * @c: changer
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
		unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
