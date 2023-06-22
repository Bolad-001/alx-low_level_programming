#include "function_pointers.h"


/**
 * array_iterator - function that execute a funtion
 * given as a parameter
 * @size: size of the array
 * @action: function pointer
 * @array: arrray to  check
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
