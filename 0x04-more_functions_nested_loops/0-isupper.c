#include "main.h"

/**
 * _isupper - detects uppercase characters
 * @c: input char
 * Return:1 in uppercase, else 0
 */

int _isupper(int c)
{
	if (c => 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
