#include "main.h"

/**
 * swap.c - Swaps the value of two integers
 * @a: swaps its value with b
 * @b: swaps value with a
 * Return: void.
 */

void swap_int(int *a, int *b) 
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
