#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	if (s != NULL)
	{

		int t = 0;
		int i;

		while (s[t] != '\0')
		t++;

		if (t > 1)
		{
			i = 0;
			while (i < t / 2)
			{
				char p = s[i];

				s[i] = s[t - i - 1];
				s[t - i - 1] = p;
				i++;
			}
		}
	}
}
