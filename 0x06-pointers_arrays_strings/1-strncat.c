#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @n: function parameter
 * @src: function parameter
 * @dest: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}

	dest[len + i] = '\0';
	return (dest);
}