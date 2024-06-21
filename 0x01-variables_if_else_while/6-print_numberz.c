#include <stdio.h>
/**
 * main - main starting  point
 * Description -  prints all single digit numbers of base 10 with putchar
 * Return: returns is 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
