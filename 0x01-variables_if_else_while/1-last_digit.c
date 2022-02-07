#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n  5)
	{
		printf("The last digit of %d is %d and is greater that 5\n", n, n);
	}

	else if (n < 6 && n != 0)
	{
		printf ("The last digit of %d is %d and is less that 6 and not 0\n", n, n);
	
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
