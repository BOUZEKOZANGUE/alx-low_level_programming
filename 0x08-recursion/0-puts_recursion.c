#include "main.h"
/**
 * _puts_recursion - is the function that print a string
 * @s: the char value
 * Return: the return value always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
