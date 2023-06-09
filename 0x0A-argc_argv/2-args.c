#include <stdio.h>

/**
 * main - funtion to print all arguments
 * @argc: argument counter
 * @argv: array of string to print
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
