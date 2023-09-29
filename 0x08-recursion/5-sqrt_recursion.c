#include "main.h"

/**
 * sqrt_a - return the natural squareroot of a number
 * @b : iterator
 * @a: function parameter
 * Return: squareroot or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 *  _sqrt_recursion - function that returns the natural squareroot of a number
 *  @n: number
 *  Return: natural squareroot
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
