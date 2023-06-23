#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum
 * of all parameters
 * @n: first element of the parameter
 *
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_sum;
	unsigned int i;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start (my_sum, n);

	for ( i = 0; i < n; i++)
	{
		result = result + va_arg(my_sum, int);
	}
	va_end(my_sum);

	return (result);
}
