#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0-14
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
