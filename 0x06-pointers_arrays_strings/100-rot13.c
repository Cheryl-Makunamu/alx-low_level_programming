#include "main.h"

/**
 * rot13 - function that encodes a string
 * @s: parameter encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int x, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}

	return (s);
}

