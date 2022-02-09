#include "main.h"
/**
 * _islower - function that checks lowercase
 * @c: interger
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
