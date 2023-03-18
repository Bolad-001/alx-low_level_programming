include "main.h"
#include <math.h>

/**
* is_prime_number - function that checks and returns 1 if an
* input integer is a prime number otherwise 0
* @n: input integer
* Return: 1 if the input integer is a prime number
*/

int is_prime_number(int n)
{
	int i;

	if(n <= 0)
		return (0);
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				return (0);
		}
	}
	return (1);
}
