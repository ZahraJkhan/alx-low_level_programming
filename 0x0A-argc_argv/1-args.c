#include <stdio.h>

/**
 * main - Print no of arg passed into it
 * @argc: no of arg passed to func
 * @argv: arg pointer to string
 *
 * Retunr: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
