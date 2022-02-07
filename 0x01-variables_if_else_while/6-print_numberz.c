#include <stdio.h>

/**
 * main - function that prints all single digit numbers if base 10
 * Return: 0
 */

int main(void)
{

	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}


