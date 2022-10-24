#include "main.h"

/**
* reset_to_98 - Resets a value
*
* Return: 1.
*/

void reset_to_98 (int *n)
{
	int var = 98;
	int *ip;
	ip = &var;

	printf("Address of var variable: %x\n" &var);
}
