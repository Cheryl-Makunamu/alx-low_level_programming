#include <stdio.h>
/**
 * main - main starting  point
 * Description -  prints all the numbers of base 16 in lowercase using putchar
 * Return: returns is 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
