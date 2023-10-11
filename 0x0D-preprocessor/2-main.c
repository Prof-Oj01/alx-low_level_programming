#include <stdio.h>

/**
 * main - program that prints the name of a file it was compiled from
 * Return: int
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
