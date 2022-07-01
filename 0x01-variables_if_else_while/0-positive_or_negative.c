#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 *main - Prints a random number and states whether
 *it is positive, negative, or zero.
 *Return: Always (0).
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	/* The beginning of my code */
	if(n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}else if(n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
