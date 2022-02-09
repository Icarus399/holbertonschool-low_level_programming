#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @i: interger
 * Return: 0
 */

int print_last_digit(int i)
{
	i = i % 10;

		if (i < 0)
		{
			i = -i;
		}
	_putchar(i + '0');
		return (i);
}
