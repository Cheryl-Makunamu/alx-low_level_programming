#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input value
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int longg = 0;

	if (*s)
	{
		longg++;
		longg += _strlen_recursion(s + 1);
	}
	return (longg);
}
