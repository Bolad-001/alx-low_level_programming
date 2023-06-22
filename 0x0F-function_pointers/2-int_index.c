#include "function_pointers.h"

/**
 * int_index - function that searches an integer
 * @size: size of the array
 * @array: array to check
 * @cmp: function pointing to the array
 *
 * Return: -1 if size is <= 0 and if no element matches
 * otherwise return the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{

		for (i = 0, i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
	}
	return (-1);
}
