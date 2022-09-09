#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i < '100'; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
	}
	putchar ('\n');

	return (0);
}
