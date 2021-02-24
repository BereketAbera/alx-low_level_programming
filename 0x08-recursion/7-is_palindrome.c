#include "holberton.h"

int _palindrome_local(char *s, int i, int j);
int _strlen_recursion_local(char *s);

/**
 * is_palindrome - check if a number is palindrome
 * @s: the number to check
 *
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_palindrome_local(s, 0, _strlen_recursion_local(s) - 1));
}

/**
 * _palindrome_local - calculate palindrome localy
 * @s: the string to check
 * @i: a temporary variable to find the palindrome
 * @j: a second temporary variable to find the palindrom
 *
 * Return: 1 if palindrome 0 otherwise
 */
int _palindrome_local(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (i + 1 == j && s[i] == s[j])
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_palindrome_local(s, i + 1, j - 1));
}

/**
 * _strlen_recursion_local - get the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen_recursion_local(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion_local(s + 1));
}
