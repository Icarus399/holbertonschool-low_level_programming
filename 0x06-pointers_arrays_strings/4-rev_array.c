#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * reverse_array - reversing the contents of a string
 * @a: interger
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int lenght = n - 1, i;
	int k = 0;

	for (i = 0; i < lenght; i++, lenght--)
	{
		k = a[i];
		a[i] = a[lenght];
		a[lenght] = k;
	}
}
