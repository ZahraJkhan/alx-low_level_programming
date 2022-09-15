#include "main.h"

/**
 * print_numbers - Prints the numbers 0-9 followed by \n
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
