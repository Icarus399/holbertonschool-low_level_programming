#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: bit
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 32)
		return (-1);

	i = 1 << index;
	*n = *n | i;
	return (1);
}
