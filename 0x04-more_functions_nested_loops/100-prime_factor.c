#include <stdio.h>

/**
 * main - prints largest prime number
 * Return: 0
*/
int main(void)
{
	long number = 612852475143;
	int in;

	while (in++ < number / 2)
	{
	if (number % in == 0)
	{
		number /= 2;
		continue;
	}

	for (in = 3 ; in < number / 2 ; in += 2)
	{
		if (number % in == 0)
			number /= in;
	}
	}
	printf("%ld\n", number);
	return (0);
}
