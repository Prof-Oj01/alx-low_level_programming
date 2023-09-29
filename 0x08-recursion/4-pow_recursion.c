#include "main.h"

/**
 *  _pow_recursion - function that returns the power of a number
 *  @x: function parameter
 *  @y: function parameter
 *  Return: the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x *  _pow_recursion(x, y - 1));
}
