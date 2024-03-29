#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer that allocate a new space in memory to
 * the string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	ptr = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}

	ptr[i + j] = '\0';

	return (ptr);
}
