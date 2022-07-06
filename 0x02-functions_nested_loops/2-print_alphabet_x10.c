#include "main.h"
/**
 * print_alphabet_x10-initialisation
 * only use the putchar twice in my code
 * Return :Always(0)
 */
void print_alphabet_x10(void)
{
	char car;
	int i = 1;

	while( i <= 10)
	{
		car = 'a';

		while( car <= 'z')
		{
			_putchar(car);
				car++;
		}
			_putchar('\n');
			i++;
	}

}
