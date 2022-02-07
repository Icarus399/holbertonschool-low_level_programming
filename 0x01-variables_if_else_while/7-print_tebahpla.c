#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,followed by a new line.
 * Return: 0
 */

int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar ('\n');
	return (0);
}


