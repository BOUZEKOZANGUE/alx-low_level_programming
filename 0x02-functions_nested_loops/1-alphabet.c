#include "main.h"
/**
 * main -use the prototype
 * print_alphabet - the first entrance.
 * only use _putchar twice in your code
 * prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
