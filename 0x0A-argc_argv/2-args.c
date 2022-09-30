#include <stdio.h>

/**
 * main - Prog prints all arg it receives incl 1st one
 * @argc: no of arg passed to func
 * @argv: arg vector pointer to string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
