#include "main.h"
#include<stdio.h>

/**
 * _strlen - Prints the length of a string
 * @s: checks length
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char var[] = *s;
	int i;
	for (i = 0; var[i] != '\0'; ++i);
	printf("%d\n",i);
	return (0);
}
