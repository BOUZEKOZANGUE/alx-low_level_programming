#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block to be executed
 * Description: computes and prints
 * Return: 0
 */
int main(void)
{
	int car = 0;
	int sum = 0;

	while (car < 1024)
	{
		if (car % 3 == 0 || car % 5 == 0)
		{
			sum += car;
		}
		car++;
	}
	printf("%i\n", sum);
	return (0);
}
