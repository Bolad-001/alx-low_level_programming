#include <stdlib.h>

/**
 * *str_cpy - function that copies a string
 * @dest: pointer to buffer
 * @src: string to copy
 *
 * Return: the pointer to string
 */

char *str_cpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
