#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to add positive numbers
 * @argc: argument counter
 * @argv: arrays of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
