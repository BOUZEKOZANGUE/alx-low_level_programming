#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including \0.
 * @src: pointer.
 * @desti: pointer.
 * Return: the pointer to dest.
 */
char *_strcpy(char *desti, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{

	}
	for (i = 0; i <= length ; i++)
	{
		desti[i] = src[i];
	}
	return (desti);
}
