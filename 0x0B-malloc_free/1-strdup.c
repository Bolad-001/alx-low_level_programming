#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that return a pointer to the
 * a newly allocated space in memory which contain a
 * copy of string
 * @str: string to copy
 *
 * Return: NULL if str is NULL else retrurn a pointer to
 * the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	ptr = malloc(sizeof(*ptr) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return (ptr);
}
