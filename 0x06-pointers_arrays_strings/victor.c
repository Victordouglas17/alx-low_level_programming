#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * *_strcat - string concatenate.
 * @dest: input string
 * @src: input string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src?)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
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
