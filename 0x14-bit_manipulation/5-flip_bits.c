
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: int
 * @m: 2int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int idx, k = 0;
	unsigned long int ii = sizeof(unsigned long int) * 8;

	for (idx = 0; idx < ii; idx++)
	{
		if ((m & 1) != (n & 1))
		{
			k += 1;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (k);
}
