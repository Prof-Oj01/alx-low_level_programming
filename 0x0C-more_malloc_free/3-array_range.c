#include "main.h"
#include <stdlib.h>

/**
 * array_range - func that creates an array of int
 * @min: min value
 * @max: max val
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
