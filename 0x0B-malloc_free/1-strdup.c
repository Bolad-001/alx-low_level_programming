#include "main.h"

/**
* _strdup - function that returns apointer to a newly
* allocated
* space in memory and contains a copy of the sttring given
* @str: input string to check.
* Return: pointer of a duplicated string
*/

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	len++;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		if (i == len - 1)
		{
			s[i] = '\0';
		}
		else
		{
			s[i] = str[i];
		}
	}
	return (s);
}
