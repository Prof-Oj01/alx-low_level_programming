#include "main.h"

/**
 * _puts_recursion - funcrion that prints a string
 * @s: function parameter
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		putchar('\n');
	}
}
