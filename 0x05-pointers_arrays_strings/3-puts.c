#include "main.h"

/**
 * _puts - funtion that prints a string followed by a new line
 * @str: function parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
