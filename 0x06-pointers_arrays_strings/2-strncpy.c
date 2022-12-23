#include "main.h"

/**
 * _strnpy - function that copies a string, including the
 * terminating null byte, using at most an inputed
 * number of bytes
 * if the length of the source string is less than the
 * maximum byte number, the remainder if the destination
 * string is filled with null bytes.
 * works identically to tge standard library function 'strncpy'
 * @dest:buffer storing the string copy
 * @src: the source string
 * @n: maximum number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
