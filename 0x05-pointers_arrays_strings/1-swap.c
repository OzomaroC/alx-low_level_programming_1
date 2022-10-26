#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void of nothing
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
