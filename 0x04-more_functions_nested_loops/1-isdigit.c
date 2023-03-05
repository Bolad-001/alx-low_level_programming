#include "main.h"

/**
* _isdigit - fuctiion that checks for a digit
* @c: input checker
*
* Return: 1 if c is a digit otherwise 0
*/

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
