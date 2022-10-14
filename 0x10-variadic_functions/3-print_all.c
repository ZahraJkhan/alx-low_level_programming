#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_s - Prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list, s)
{
	char *str = va_arg(s, char *);
	if (str == NULL)
		srt = "(nil)";
	printf("%s", str);
}
/**
 * print_i - Prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list, i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f -  prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list, f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - Prints anything
 * @format: list of arg passed to func
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c};
		{"s", print_s};
		{"i", print_i};
		{"f", print_f};
		{NULL, NULL}
	};
	va_list valist;
	char *seperator = "";


	va_start(valist, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*p]j].t == format[i])
			{
				printf("%s", seperator);
				p[j].f(valist);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
