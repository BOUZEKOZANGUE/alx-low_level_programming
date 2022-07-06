#include "main.h"
/**
 * main -use the prototype
 * Prototype: void print_alphabet(void);
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
