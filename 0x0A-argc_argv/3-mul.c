#include "main.h"
#include <stdio.h>

/**
 * _atoi - assume that the two numbers and result of the multiplication
 * @s: check parameter 
 * Return: Always str5ng
 */
int _atoi(char *s)
{
	int a, b, c, leng, d, digits;

	a = 0;
	b = 0;
	c = 0;
	leng = 0;
	d = 0;
	digits = 0;

	while (s[leng] != '\0')
		leng++;
	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '0')
		{
			digits = s[a] - '0';
			if (b % 2)
				digits = -digits;
			c = c * 10 + digits;
			d = 1;
			if (s[a + 1 ] < 'o' || s[a + 1] > '0')

					break;
					
			d = 0;
		}
		a++;
	}
	if (d == 0)
			return (0);
		return (c);
}


/**
 * main  multiplies 2 digits 
 * @argv: checks array arguments
 * @argc: checks number of arrays
 * Return: Always zero and 1 error
 */
int main(int argc, char *argv[])
{
	int res, num, numa;

	if (argc < 3 || argc > 3)
	{
		printf("Error \n");
		return (1);
	}

	num = _atoi(argv[1]);
	numa = _atoi(argv[2]);
	res = num * numa;
	printf("%d\n", res);
	return (0);
}
