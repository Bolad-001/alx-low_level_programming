#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string input
 *
 * Return: the length of the string, s
 */

int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * find_palindrome - checks if a string is a palindrome
 * @a: pointer to the first character of the string
 * @b: pointer to the last character of the string
 *
 * Return: 1 if the string is a palindrome otherwise 0
 */

int find_palindrome(char *i, char *j)
{
	if ((*i != *j) && (*i != '\0'))
	{
		return (0);
	}

	if ((*i == *j) && (*i != '\0'))
	{
		return (find_palindrome(i + 1, b + 1));
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string input
 *
 * Return: 1 if the string is a palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (find_palindrome(s, (s + _strlen(s) - 1)));
}
