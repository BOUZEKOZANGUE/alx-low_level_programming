#include "main.h"
/**
 * times_table - print times table
 * Return: 0
 */
void times_table(void)
{
	int a, b, calc;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			calc = a * b;
			if (b == 0)
			{
				_putchar('0' + calc);
			}
			else if (calc < 10)
			{
				_putchar(' ');
				_putchar('0' + calc);
			}
			else
			{
				_putchar('0' + calc / 10);
				_putchar('0' + calc % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
