#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c: is the int used for the argument of the function.
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
