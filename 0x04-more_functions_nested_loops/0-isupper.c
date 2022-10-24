#include "main.h"

/**
 * _isupper - detects if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if it's an uppercase char, 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
