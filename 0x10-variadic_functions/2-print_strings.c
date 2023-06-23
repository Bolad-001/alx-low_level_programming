#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print string
 * @separator: string between strings
 * @n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_string;
	unsigned int i;
	char *a;

	va_start(my_string, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		a = va_arg(my_string, char *);

		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(my_string);
}
