#include "main.h"
#include <stddef.h>

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int i, k;

	char lt[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; lt[k] != '\0'; k++)
		{
			if (lt[k] == str[k])
			{
				str[i] = num[k];
			}
		}
	}
	return (str);
}
