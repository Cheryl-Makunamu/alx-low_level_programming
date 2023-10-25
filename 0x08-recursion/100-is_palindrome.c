#include "main.h"

/**
 * is_palindrome - if a string is a palindrome
 * @s: string to reverse
 * Return: if true r eturn 1 else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pali(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - returns string length
 * @s: calcuate string length
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pali -  if a character is a palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of a string
 * Return: if true return 1 else 0
 */
int check_pali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pali(s, i + 1, len - 1));
}

