#include "main.h"

/**
 * print_bi - print the binary representation of a number recursively
 * @n: the decimal input
 * Return: void
 */

void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		putchar('1');
	if ((n & 1) == 0)
		putchar('0');
}

/**
 * print_binary - function that prints the binary representation
 * of a number
 *
 * @n: decimal number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
	{
		print_bi(n);
	}
}
