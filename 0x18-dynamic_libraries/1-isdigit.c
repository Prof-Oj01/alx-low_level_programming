#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: char to be checked
 * Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
