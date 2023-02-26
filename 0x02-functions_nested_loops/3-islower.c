#include "main.h"

/**
* _islower - check for lowercase caharacter
* @c: letter to be returned
*
* Return: 1 if c otherwise 0
*/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
