#include "main.h"
#include<stdio.h>

/**
 * _strlen - Prints the length of a string
 * @s: checks length
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;	
	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
