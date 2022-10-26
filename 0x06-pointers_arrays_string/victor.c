#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * *_strcat - string concatenate.
 * @dest: input string
 * @src: input string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (0);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char First_name[100] = "Victor", surname[] = "Douglas\n", *Name;

	printf("%s\n", First_name);
	printf("%s", surname);
	Name = _strcat(First_name, surname);
	printf("%s", Name);
	return (0);
}
