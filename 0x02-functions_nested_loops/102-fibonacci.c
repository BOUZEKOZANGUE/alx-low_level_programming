#include <stdio.h>
/**
 * main - block to execute
 * Desciption: computes and prints the fibonacci func
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int f1 = 0, f2 = 1, sum;

	while (i < 50)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%lu", sum);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
