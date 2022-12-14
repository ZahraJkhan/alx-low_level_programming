#include "main.h"

/**
 * times_table - Print the 9 times table starting with 0
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;

			if (mult == 0)
				_putchar('0' + prod);
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar('0' + prod);
			}
			else
				_putchar('0' + prod / 10);
			_putchar('0' + prod % 10);
		}
		if (mult < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
