#include "main.h"

/**
 * _strcat -function that concatenates two strings
 * @dest: destination
 * @src: pointer
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (0);
}

