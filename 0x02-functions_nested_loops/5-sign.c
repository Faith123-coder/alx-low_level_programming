#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number being checked
 * Return: 1 if number is 0 if its zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
