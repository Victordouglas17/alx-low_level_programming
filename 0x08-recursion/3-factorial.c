#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		int x = n * factorial(n - 1);
	return (x);
}
