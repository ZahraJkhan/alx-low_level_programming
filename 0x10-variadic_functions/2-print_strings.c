#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by \n
 * @seperator: the string to be printed
 * @n: no of strings passed to function
 * @...: a variable no of no to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");

	va_end(strings);
}
