#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - print type with corresponding print function
 * @symbol: symbol rep data type
 * @print: function pointer to a func that prints a data type rep a symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
