#include "main.h"
#include <stddef.h>
/**
 * string_toupper  - function that changes all lowercase to upper case
 * @str: string
 * Return: the string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

