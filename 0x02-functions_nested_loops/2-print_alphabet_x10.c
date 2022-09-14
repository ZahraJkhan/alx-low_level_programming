#include "main.h"

/**
 * 2-print_alphabet_x10.c - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (1 < 10)
	{
		char low = 'a';

		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}
		_putchar('\n');
		i++;
	}
}
