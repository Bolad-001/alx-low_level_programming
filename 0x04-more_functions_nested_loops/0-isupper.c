#include "main.h"

/**
* _isupper - check for character in Upper case and return
* 1 if the character is c and 0 if otherwise
* @c: charcter to check
*
* Return: return 1 f c is upper case
*/

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)

	if (c == i)
	{
		return (1);

	else
		return (0);
	}
}
