#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by \n
 * @separator: the string to be printed
 * @n: no of strings passed to function
 * @...: a variable no of no to be printed
 *
 * Description: dont print if seperator is NULL, if one str is null-nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sep = 1;
	char *a;

	if (separator == NULL)
		sep = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(valist, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (i < n - 1 && sep != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
