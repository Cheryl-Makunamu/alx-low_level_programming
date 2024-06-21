#include <stdio.h>
/**
 * main - main starting  point
 * Description - prints the alphabet in lowercase
 * Return: returns is 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

