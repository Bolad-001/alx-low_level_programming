#include "3-calc.h"

/**
 * get_op_func - function pointer that checks for the 
 * correct funtion entegred by the user
 * @s: operator to check
 *
 * Return: pointer to the funtion
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
    	if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);

	i++;
    }

    return (NULL);
}
