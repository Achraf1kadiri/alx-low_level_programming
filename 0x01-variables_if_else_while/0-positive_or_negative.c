#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - sees if a number is +, - or 0.
 *
 * okay seeing if this comment work.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}
	return (0);
}

