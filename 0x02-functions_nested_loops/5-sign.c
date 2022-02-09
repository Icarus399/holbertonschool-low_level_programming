#include "main.h"
://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwjs2qyR8_L1AhX6TjABHeY5DQcQwqsBegQIFBAB&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DAXuRRxgAz0I&usg=AOvVaw0o4t_9CoKjeufmMmF3mitS 
/**
 * print_sign - function that prints the sign of a number
 * @n: interger
 * Return: 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

