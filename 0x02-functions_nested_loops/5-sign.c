#include "main.h"
/**
 * print_sign- to print a sign of the number
 * @n : number to check
 * Return:1, 0 or -1
 */
int print_sign(int n)
{
	int number;

	if (n > 0)
	{
		number = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	else (n < 0)
	{
		number = -1;
		_putchar('-');
	}

	return (number);
}
