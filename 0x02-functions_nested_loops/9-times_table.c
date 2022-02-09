#include "main.h"
/**
 * times_table - function that prints the 9 times table.
 * Return: 0
 *
 */

void times_table(void)
{
	int num1, num2, result;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 < 10; num2++)
		{

			result = num1 * num2;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
