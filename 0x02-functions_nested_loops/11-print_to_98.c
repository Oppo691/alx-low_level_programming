#include "main.h"
#include <stdio>

/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
