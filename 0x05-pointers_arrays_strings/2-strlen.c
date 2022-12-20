#include "main.h"
#include <stdio.h>

/**
 * _strlen - a fuction that returns the length of a string
 * @s: string inputed
 * Return: length of string
 */
int _strien(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
