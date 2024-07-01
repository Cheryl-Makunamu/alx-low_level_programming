#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: string reversed
 */
void rev_string(char *s)
{
	char tmp;
	int x, leng, leng1;

	leng = 0;
	leng1 = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	leng1 = leng - 1;

	for (x = 0; x < leng / 2; x++)
	{
		tmp = s[x];
		s[x] = s[leng1];
		s[leng1--] = tmp;
	}
}
