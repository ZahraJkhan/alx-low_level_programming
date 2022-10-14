#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by \n
 * @seperator: the string to be printed
 * @n: no of strings passed to function
 *
 * Return: void/
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			print("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	ve_end(valist);
}
