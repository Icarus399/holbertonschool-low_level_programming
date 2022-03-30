#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 * Return: value
 */
void rev_string(char *s)
{
	int lenght, index = 0;
	char tmp;

	while(s[index++])
		{
			lenght++;
		}

	for(lenght = index - 1; index >= lenght / 2; index--)
	{
		tmp = s[index];
		s[index] = s[lenght - index - 1];

		s[lenght - index - 1] = tmp;
	}
}
