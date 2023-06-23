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
	int num;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(my_numbers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(my_numbers, int);
		printf("%d", num);


		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(my_numbers);

	printf("\n");
}
