#include <stdio.h>

/**
 * main - putchar function
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar ('\n');
	return (0);
}
