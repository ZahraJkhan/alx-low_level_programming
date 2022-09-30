#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two no
 * @argc: no of arg to pass to func
 * @argv: arg vector of pointer to string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
