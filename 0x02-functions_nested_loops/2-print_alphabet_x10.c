#include <main.h>

/**
 * main - Eprints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 
 */
void print_alphabet_10x(void)
{
	int count = 0;
	char low;

	while (count++ <= '9')
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');
	}
}
