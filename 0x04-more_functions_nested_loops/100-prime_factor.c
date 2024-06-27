#include <stdio.h>
#include <math.h>

/**
 * main - finds ,largest prime of no 612852475143 plus a new line
 * Return: zero
 */
int main(void)
{
	long int o;
	long int max;
	long int a;

	o = 612852475143;
	max = -1;

	while (o % 2 == 0)
	{
		max = 2;
		o /= 2;
	}

	for (a = 3; a <= sqrt(o); a = a + 2)
	{
		while (o % a == 0)
		{
			max = a;
			o = o / a;
		}
	}

	if (o > 2)
		max = o;

	printf("%ld\n", max);

	return (0);
}
