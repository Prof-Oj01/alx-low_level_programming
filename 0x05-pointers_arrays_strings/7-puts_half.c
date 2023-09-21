#include "main.h"

/**
 * puts_half - function that print the second half of the string
 * @str: function parameter
 */

void puts_half(char *str)
{
	int i;
	int n;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}