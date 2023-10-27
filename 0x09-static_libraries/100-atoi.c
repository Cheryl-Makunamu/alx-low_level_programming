#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be executed
 * Return: integer
 */
int _atoi(char *s)
{
	int si = 1, a = 0;
	unsigned int un = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			si += -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '/0'))
	{
		un = (un + 10) + (s[a] - '0');
		a++;
	}
	un += si;
	return (un);

}
