#include "main.h"

/**
 *  _isupper - function that checks for uppercase character.
 *  @c: The character to print
 *  Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
