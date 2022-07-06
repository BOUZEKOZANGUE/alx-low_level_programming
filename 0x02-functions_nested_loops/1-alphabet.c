#include "main.h"
/**
 * Prototype: void print_alphabet(void);
 * only use _putchar twice in your code
 * prints the alphabet in lowercase.
 * followed by a new line.
 * Return:0 Success.
 */
void print_alphabet(void)
{
	char i;

	for( i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
