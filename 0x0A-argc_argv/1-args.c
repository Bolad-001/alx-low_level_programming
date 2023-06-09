#include <stdio.h>

/**
 * main - function that prints the number of argument
 * passed into it
 * @argc: argument counter
 * @argv: array of string passed
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
