#include <stdio.h>
/**
 * main - main starting  point
 * Description -  prints the lowercase alphabet in reverse using putchar
 * Return: returns is 0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

