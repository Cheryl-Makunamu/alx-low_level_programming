#include "main.h"

/**
 * *_strspn - fuction that gives length of a prefix
 * @s: parameter
 * @accept: string to match compare
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, f;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		f = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (c);
		}
	}

	return (0);
}
