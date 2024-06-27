#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gives interger it executes, and prints it
 * Return: zero
 */
int main(void)
{
	int j;

	srand(time(0));
	j = rand() - RAND_MAX / 2;
	if (j > 0)
		printf("%d is positive\n", j);
	else if (j == 0)
		printf("%d is zero\n", j);
	else if (j < 0)
		printf("%d is negative\n", j);
	return (0);
}

