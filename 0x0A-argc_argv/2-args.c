#include <stdio.h>

/**
 * main - program that prints all argumenst received
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguents
 * Return: 0 when successful
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
