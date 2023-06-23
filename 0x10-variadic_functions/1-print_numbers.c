#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that print number
 * @separator: seperator between number
 * @n: number of int passed
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int i;

	if (separator == NULL)
	{
		;
	}

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(my_numbers, int));
		}
		else
		{
			printf("%d%s", va_arg(my_numbers, int), separator);
		}
	}
	va_end(my_numbers);
	printf("\n");
}
