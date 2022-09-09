#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	char low;

	for (b = 0; b <= 9; b++)
		putchar (b);
	for (low = 'a'; low <= 'f'; low++)
		putchar (low);
	putchar ('\n');

	return (0);
}
