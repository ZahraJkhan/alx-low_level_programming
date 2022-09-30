#include <stdio.h>

/**
 * main - Prints name of program
 * @argc: no of arg passed to func
 * @argv: arg pointer to string
 *
 * Return: Always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
