#include "main.h"

/**
 *  _strlen - function that returns the lenght of a string
 *  @s: function parameter
 *  Return: the length of the screen
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
