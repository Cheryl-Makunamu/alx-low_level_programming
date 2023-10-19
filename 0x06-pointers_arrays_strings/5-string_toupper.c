#include "main.h"

/**
 * string_toupper - changes all lower cases to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int j;

	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 12;
		j++;
	}
	return (n);
}
