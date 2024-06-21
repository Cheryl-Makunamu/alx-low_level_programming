#include <stdio.h>
/**
 * main - main starting  point
 * Description -  alphabet in lowercase, and then in uppercase, followed
 * Return: returns is 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
