#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print the result of multipli
 * cation of two numbers
 * @argc: argument counter
 * @argv: array of strings to print
 *
 * Return: the product of two number otherwise error
 * and return 1
 */

int main(int argc, char *argv[])
{
	int first_num, second_num, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = atoi(argv[1]);
	second_num = atoi(argv[2]);
	res = first_num * second_num;

	printf("%d\n", res);

	return (0);
}
