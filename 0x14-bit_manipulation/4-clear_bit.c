#include "main.h"

/**
 * clear_bit - sets the value a bit to 0 at given index.
 * @index: index, starting from 0 of the bit you want to set
 * @n: pointer
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (n == NULL || index > 32)
		return (-1);

	i = 1 << index;
	if ((i & *n) == i)
	{
		*n -= i;
	}
	return (1);
}
