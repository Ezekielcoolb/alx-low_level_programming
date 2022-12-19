#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;

	return (0);
}
