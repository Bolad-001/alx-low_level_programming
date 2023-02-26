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

	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
