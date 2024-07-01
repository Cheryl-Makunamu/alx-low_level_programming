#include "main.h"

/**
 * _puts - function that prints a string in stdout
 * @str: pointer belonging to string
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
