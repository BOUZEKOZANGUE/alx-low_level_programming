#include <stdio.h>
/**
 * main - prints prime numbers
 * Return: Always 0
 */
int main(void)
{
	long int x = 612852475143;
	long int bz;

	for (bz = 2; bz < x; bz++)
	{
		if (x % bz == 0)
		{
			x = x / bz;
		}
	}
	printf("%ld\n", bz);

	return (0);
}
