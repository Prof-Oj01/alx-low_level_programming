#include "main.h"

/**
 *  print_diagsums - function that prints sum of two diagonals of square matrix
 *  @a: function parameter
 *  @size: function parameter
 *  Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int num1;
	int num2;
	int i;

	num1 = 0;
	num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 = num1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		num2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", num1, num2);
}
