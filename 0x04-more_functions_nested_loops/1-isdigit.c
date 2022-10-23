#include "main.h"

/**
 * _isdigit - detect if int is a number between 0 to 9.
 * @c: input int.
 * Return: 1 if int is (0 to 9), else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

