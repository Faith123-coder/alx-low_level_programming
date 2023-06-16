#include <stdio.h>
/**
 * main - Print all possible combinations of single digit numbers
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
