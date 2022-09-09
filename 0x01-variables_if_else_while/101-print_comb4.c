#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, f, g;

	for (i = '0'; i <= '9'; i++)
	{
		for (f = i + 1; f <= '9'; f++)
		{
			for (g = f + 1; g <= '9'; g++)
			{
				if ((f != i) != g)
				{
					putchar (i);
					putchar (f);
					putchar (g);

					if (i == '7' && f == '8')
						continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
