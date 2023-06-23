#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - fnction that prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: nothing.
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list my_any;
	char *s, *separator = "";

	va_start(my_any, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(my_any, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(my_any, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(my_any, double));
				break;
			case 's':
				s = va_arg(my_any, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(my_any);
}
