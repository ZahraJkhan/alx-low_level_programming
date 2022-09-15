#include "main.h"

/**
 * print_line - Draws straight line in the terminal
 * @n: number of lines character should be printed
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar9('\n');
}
