#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gets the length of the input string
 * @str: String input
 * Return: Number of indexes in a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * _strcpy - Copies a string from src to dest
 * @dest: String to be copied to
 * @src: String to be copied from
 *
 * Return: Pointer to start of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
