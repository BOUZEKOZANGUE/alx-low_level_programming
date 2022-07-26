#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - main function.
 * @s1: first string.
 * @s2: Second string.
 *
 * Description: Write a function that returns a pointer to a newly allocated space in memory.
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * Return: The pointer to str.
 */

char *str_concat(char *s1, char *s2)
{
	int size; /*  Size of the string*/
	int size2; /*Size of second string */
	int i, j; /* Loop Iterators */
	char *array; /* Output  */

	if (!s1)
		s1 = ""; /* Returns an empty string */
	if (!s2)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++) /* count string */
		;
	for (size2 = 0; s2[size2] != '\0'; size2++) /* count string */
		;
	array = malloc(((size) + (size2 + 1)) * sizeof(char)); /* New memory alloc */

	if (!array)
	{
		return (NULL); /* Returns NULLL if malloc fails */
	}
	for (i = 0; i < size; i++)
	{
		array[i] = s1[i]; /
	}
	for (j = 0; j < (size2 + 1); j++)
	{
		array[i + j] = s2[j]; 
	}
	return (array);
}
