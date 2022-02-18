#include "main.h"
#include <stddef.h>
/**
 * _strncat - function that concatenates two string
 * @dest: string
 * @src: string
 * @n: interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		;

		for (j = 0; src[j] != '\0' && j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	if (j < n)
	{
		src[j] = '\0';
	}
	return (dest);
}
