#include "main.h"
/**
 * print_alphabet_x10 - funcition to print an alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
