#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *  @n: used for the arguments of the function
 *  Return: integer value
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * (n % 10));
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = (n % 10);
		_putchar(last + '0');
		return (last);
	}
}
