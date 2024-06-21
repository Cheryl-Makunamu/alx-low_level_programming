#include <stdio.h>
/**
 * main - main starting  point
 * Description - Print all the letters except q and e
 * Return: returns is 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
