#include "main.h"

/**
* str_concat - function that concatenates two strings
* @s1: input string 1
* s2: input string 2
* Return: NULL on failure otherwise the new pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int total_len;
	int k;
	int s1len = 0;
	int s2len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	total_len = s1len + s2len;

	str = malloc(sizeof(char) * total_len + 1);

	for (k = 0; k <= total_len; k++)
	{
		if (k < s1len)
		{
			str[k] = s1[k];
			s1++;
		}
		else
		{
			str[k] = s2[k];
			s2++;
		}
	}
	str[k] = '\0';
	return (str);
}
