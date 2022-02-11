#include "main.h"
/**
 * print_square - function that prints a square
 * @size: integrer.
 *
 */
void print_square(int size)
{
	int num;
	int k;

	for (num = 0; num < size; num++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)

		_putchar('\n');
}
