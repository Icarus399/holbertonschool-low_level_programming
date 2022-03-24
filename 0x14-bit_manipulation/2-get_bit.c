#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: bit
 * @index:index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > 32)
		return (-1);

	k = n >> index;
	return (k & 1);
}
