#include "main.h"

/**
 * positive_or_negative - this program will assing a random number to
 *the variable.
 * Return: 0
 * @n: interger
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);

	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else
	{
		printf("%d is zero\n", n);
	}

}

