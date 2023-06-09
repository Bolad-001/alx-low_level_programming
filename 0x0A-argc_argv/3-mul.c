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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi((argv[1]) * atoi(argv[2]));

	printf("%d\n", result);

	return (0);
}
