#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * and checks the sysytem byte order
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int x;
	int little_or_big;

	x = 1;
	little_or_big = (int) (((char *)&x)[0]);
	return (little_or_big);
}
