#include <stdio.h>
#include <stlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
			putchar(ch);
			ch++;
	}
	putchar('\n');
	return (0);
}
